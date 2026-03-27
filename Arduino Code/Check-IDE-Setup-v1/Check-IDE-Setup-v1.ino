#include <Arduino.h>
#include "esp_system.h"
#include "esp_chip_info.h"
#include "esp_psram.h"

void setup() {
  Serial.begin(115200);
  delay(2000);

  Serial.println();
  Serial.println("===== ESP32-S3 System Info =====");

  esp_chip_info_t chip_info;
  esp_chip_info(&chip_info);

  Serial.print("Chip model: ");
  Serial.println(ESP.getChipModel());

  Serial.print("Chip revision: ");
  Serial.println(ESP.getChipRevision());

  Serial.print("Number of cores: ");
  Serial.println(chip_info.cores);

  Serial.print("CPU frequency (MHz): ");
  Serial.println(getCpuFrequencyMhz());

  Serial.print("Flash size (MB): ");
  Serial.println(ESP.getFlashChipSize() / (1024 * 1024));

  Serial.print("Flash speed (MHz): ");
  Serial.println(ESP.getFlashChipSpeed() / 1000000);

  if (psramFound()) {
    Serial.println("PSRAM detected: YES");

    Serial.print("PSRAM size (MB): ");
    Serial.println(ESP.getPsramSize() / (1024 * 1024));

    Serial.print("Free PSRAM (bytes): ");
    Serial.println(ESP.getFreePsram());
  } else {
    Serial.println("PSRAM detected: NO");
  }

  Serial.print("Free heap (bytes): ");
  Serial.println(ESP.getFreeHeap());

  Serial.print("Minimum free heap (bytes): ");
  Serial.println(ESP.getMinFreeHeap());

  Serial.print("SDK version: ");
  Serial.println(ESP.getSdkVersion());

  Serial.println("===============================");
}

void loop() {
  delay(5000);
}