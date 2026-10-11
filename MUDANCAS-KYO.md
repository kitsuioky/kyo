# Mudanças adicionadas por cima do seu Kyo (rebrand)

- `assets/kyo-bar.svg` — logo Kyo BRANCO usado no botão da barra (antes era a coruja)
- `src/shell/bar/widgets/control_center_widget.cpp` — botão da barra usa `kyo-bar.svg` quando você não definiu `custom_image`
  (a cor segue o tema: claro no escuro, escuro no claro)
- `src/theme/builtin_palettes.cpp` — paleta **Kyo** (rosa #FA0050, fundo cinza escuro, erro #D12323) no lugar da antiga,
  mais **Butterfly** (violeta claro), **Yagami** (roxo escuro cyberpunk) e **Cyberpunk** (vermelho + ciano + roxo).
  Ordem na lista: Kyo (padrão, primeira), Butterfly, Yagami, Cyberpunk e depois as demais.
  Cor de erro é sempre vermelha (#D12323), nunca laranja.

Nada mais foi alterado (LICENSE, CREDITS, URLs e o seu rebrandingname.py estão como vieram).
