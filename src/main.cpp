#include <M5Atom.h>

CRGB dispColor(u_int8_t r, uint8_t g, uint8_t b) {
  return (CRGB)((r << 16) | (g << 8) | b);
}

void setup() {
  M5.begin(true, false, true);
  M5.dis.drawpix(0, dispColor(0,0,0));
}

void loop() {
  M5.update(); 
  if (M5.Btn.isPressed()) {  
    M5.dis.drawpix(0, dispColor(0, 0, 255)); 
  } else { 
    M5.dis.drawpix(0, dispColor(20, 20, 20)); 
  }
  delay(100); 
}