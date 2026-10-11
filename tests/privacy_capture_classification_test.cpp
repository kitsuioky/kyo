#include "pipewire/privacy_capture_classification.h"
#include "tests/test_check.h"

using kyo::pipewire::isPrivacyAudioCaptureConsumer;
using kyo::pipewire::PrivacyAudioConsumerProperties;

int main() {
  TEST_CHECK(isPrivacyAudioCaptureConsumer({.mediaClass = "Stream/Input/Audio"}));

  TEST_CHECK(!isPrivacyAudioCaptureConsumer({
      .mediaClass = "Stream/Input/Audio",
      .linkGroup = "filter-chain-27310-30",
  }));
  TEST_CHECK(!isPrivacyAudioCaptureConsumer({
      .mediaClass = "Stream/Input/Audio",
      .nodePassive = true,
  }));
  TEST_CHECK(!isPrivacyAudioCaptureConsumer({
      .mediaClass = "Stream/Input/Audio",
      .streamCaptureSink = true,
  }));
  TEST_CHECK(!isPrivacyAudioCaptureConsumer({.mediaClass = "Stream/Output/Audio"}));

  return 0;
}
