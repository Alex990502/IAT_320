#include <Adafruit_CircuitPlayground.h>

int vals[8] = {3, 2, 0, 1, 6, 9, 10, 12};
float pitches[8] = {261.626, 293.665, 329.628, 349.228, 391.995, 440.0, 493.883, 523.251};

void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
}

void loop() {
  CircuitPlayground.clearPixels();
  for (int i = 0; i < 8; i++) {
    int x = (CircuitPlayground.readCap(vals[i]));
    if (x > 600) {
      CircuitPlayground.playTone(pitches[i], 100);
      CircuitPlayground.setPixelColor(0, 255, 241, 0);
      CircuitPlayground.setPixelColor(1, 255, 140, 0);
      CircuitPlayground.setPixelColor(2,   232, 17, 35);
      CircuitPlayground.setPixelColor(3,   236, 0, 140);
      CircuitPlayground.setPixelColor(4,   104, 33, 122);
      CircuitPlayground.setPixelColor(5, 0, 24, 143);
      CircuitPlayground.setPixelColor(6, 0, 188, 242);
      CircuitPlayground.setPixelColor(7,   0, 178, 148);
      CircuitPlayground.setPixelColor(8,   0, 158, 73);
      CircuitPlayground.setPixelColor(9,   186, 216, 10);

    }
  }
  Serial.println(" ");
  delay(300);
}
