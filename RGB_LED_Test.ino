#include <FastLED.h>

#define LED_PIN  12
#define NUM_LEDS 50
#define BRIGHTNESS 01

CRGB leds[NUM_LEDS];


void setup() {
  // put your setup code here, to run once:
  FastLED.addLeds<WS2811, LED_PIN, GRB>(leds, NUM_LEDS);
    }

void loop() {
 // Set to green for 20 seconds. 
 for (int i = 0; i <= 49; i++) {
  leds[i] = CRGB (255, 0 , 0);
  FastLED.setBrightness(10);
  FastLED.show();
  FastLED.delay(40);
  }
FastLED.delay(20000);

 //Set to red for 20 seconds.
 for (int i = 0; i <= 49; i++) {
 leds[i] = CRGB (0, 255, 0);
 FastLED.setBrightness(10);
 FastLED.show();
 FastLED.delay(40);
 }
FastLED.delay(20000);

//Set to Blue for 20 seconds.
 for (int i = 0; i <= 49; i++) {
 leds[i] = CRGB (0, 0, 255);
 FastLED.setBrightness(10);
 FastLED.show();
 FastLED.delay(40);
 }
FastLED.delay(20000); 
/*
  // put your main code here, to run repeatedly:
  leds[0] = CRGB(255, 0, 0);
  FastLED.show();
  delay(10000);
  leds[0] = CRGB(0, 0, 0);
  FastLED.show();
  leds[40] = CRGB(0, 255, 0);
  FastLED.show();
  delay(10000);
*/

}
