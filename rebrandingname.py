import os
import re
from pathlib import Path


def substituir_respeitando_case(match):
  palavra = match.group(0)

  if palavra.isupper():
    return "KYO"
  elif palavra[0].isupper():
    return "Kyo"
  else:
    return "kyo"


def processar_projeto():
  # Pega exatamente a pasta onde o script está sendo executado
  raiz = Path(__file__).resolve().parent
  padrao = re.compile(r"noctalia", re.IGNORECASE)

  print(f"📂 Pasta de trabalho atual: {raiz}")
  print("🔄 Processando o conteúdo dos arquivos...")

  # 1. Substituir o conteúdo dentro dos arquivos
  # (Ignora o próprio script para não se modificar a si mesmo)
  script_atual = Path(__file__).resolve()

  for caminho_arquivo in raiz.rglob("*"):
    if caminho_arquivo.is_dir() or caminho_arquivo == script_atual:
      continue

    try:
      conteudo = caminho_arquivo.read_text(encoding="utf-8")

      if padrao.search(conteudo):
        novo_conteudo = padrao.sub(substituir_respeitando_case, conteudo)
        caminho_arquivo.write_text(novo_conteudo, encoding="utf-8")
        print(f"  [Conteúdo atualizado] {caminho_arquivo.relative_to(raiz)}")
    except (UnicodeDecodeError, PermissionError):
      continue

  # 2. Renomear arquivos e pastas (de baixo para cima)
  print("\n📁 Renomeando arquivos e pastas...")
  for caminho in sorted(raiz.rglob("*"), reverse=True):
    if caminho == script_atual:
      continue

    nome_atual = caminho.name

    if padrao.search(nome_atual):
      novo_nome = padrao.sub(substituir_respeitando_case, nome_atual)
      novo_caminho = caminho.parent / novo_nome

      try:
        caminho.rename(novo_caminho)
        print(f"  [Renomeado] {caminho.relative_to(raiz)} -> {novo_nome}")
      except Exception as e:
        print(f"  [Erro ao renomear] {caminho.relative_to(raiz)}: {e}")

  print("\n✨ Substituição concluída com sucesso!")


if __name__ == "__main__":
  processar_projeto()