#include <FastLED.h>
#define LED_PIN     3
#define NUM_LEDS    4
#define KNOB_1      0
#define KNOB_2      1
#define wait_time   40 // time between color chnge

CRGB leds[NUM_LEDS];

void setup() {
  // Leds
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  // Potenciometer
  Serial.begin(9600); //Initial serial communication at 9600 bits per second
}

void loop(){

//start from red
  for( int colorStep=0; colorStep <= 255; colorStep++ ) {

  int r = 255;
  int g = 0;
  int b = colorStep;

  // Now loop though each of the LEDs and set each one to the current color
  for(int x = 0; x < NUM_LEDS; x++){
      leds[x] = CRGB(r,g,b);
  }

  // Display the colors we just set on the actual LEDs
      delay(10); 
      FastLED.show();
      }

    //into blue
      for( int colorStep=255; colorStep >= 0; colorStep-- ) {

      int r = colorStep;
      int g = 0;
      int b = 255;

      // Now loop though each of the LEDs and set each one to the current color
      for(int x = 0; x < NUM_LEDS; x++){
          leds[x] = CRGB(r,g,b);
      }

      // Display the colors we just set on the actual LEDs
  delay(10); 
  FastLED.show();
  }

//start from blue
  for( int colorStep=0; colorStep <= 255; colorStep++ ) {

      int r = 0;
      int g = colorStep;
      int b = 255; 

      // Now loop though each of the LEDs and set each one to the current color
      for(int x = 0; x < NUM_LEDS; x++){
          leds[x] = CRGB(r,g,b);
      }

      // Display the colors we just set on the actual LEDs
  delay(10); 
  FastLED.show();
  }

//into green
  for( int colorStep=255; colorStep >= 0; colorStep-- ) {

      int r = 0;
      int g = 255;
      int b = colorStep; 

      // Now loop though each of the LEDs and set each one to the current color
      for(int x = 0; x < NUM_LEDS; x++){
          leds[x] = CRGB(r,g,b);
      }

      // Display the colors we just set on the actual LEDs
  delay(wait_time); 
  LEDS.show();
  }

//start from green
  for( int colorStep=0; colorStep <= 255; colorStep++ ) {

      int r = colorStep;
      int g = 255;
      int b = 0;

      // Now loop though each of the LEDs and set each one to the current color
      for(int x = 0; x < NUM_LEDS; x++){
          leds[x] = CRGB(r,g,b);
      }

      // Display the colors we just set on the actual LEDs
  delay(wait_time); 
  LEDS.show();
  }

//into yellow
  for( int colorStep=255; colorStep >= 0; colorStep-- ) {

      int r = 255;
      int g = colorStep;
      int b = 0;

      // Now loop though each of the LEDs and set each one to the current color
      for(int x = 0; x < NUM_LEDS; x++){
          leds[x] = CRGB(r,g,b);
      }

      // Display the colors we just set on the actual LEDs
  delay(wait_time); 
  LEDS.show();
  }


} //end main loop

//void loop() {
//
//
//  // Potentiometer
////  int val_1 = analogRead(KNOB_1); // Read the input on analog pin
////  int val_2 = analogRead(KNOB_2); // Read the input on analog pin
////  //val = map(val, 0, 1024, 0, 255);
////  val_1 = val_1/4; //0-1024 255
////  val_2 = val_2/4; //0-1024 255
//
//  //Serial.println(val_1);
//  //Serial.println(val_2);
//  
//  //leds[0] = CRGB(val_1, val_1, val_1);
//  //leds[1] = CRGB(val_2, val_2, val_2);
//  //leds[2] = CRGB(236, 103, 91);
//  //leds[3] = CRGB(237, 104, 92);
//  //FastLED.show();
//
//  int val_1 = analogRead(KNOB_1);
//  val_1 = val_1/4;
//  FastLED.setBrightness(  val_1 );
//
//  // Leds
//  for(int i = 0; i <= 3; i++){
//    leds[i] = CRGB(0,255,0);
//    FastLED.show();
//    delay(90);  
//  }
////
//  for(int i = 3; i >= 0; i--){
//    leds[i] = CRGB(0,0,255);
//    FastLED.show();
//    delay(90);  
//  }
//
//  //leds[3] = CRGB(0,sensorValue,255);
//
//  //Serial.println(sensorValue);
//  //delay(1); //delay between reads for stability
//  
//}
//
//void setColourRgb(unsigned int red, unsigned int green, unsigned int blue) {
//  analogWrite(redPin, red);
//  analogWrite(greenPin, green);
//  analogWrite(bluePin, blue);
// }


