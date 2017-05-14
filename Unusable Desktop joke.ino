#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT); //Go to the Desktop
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(70); //Captures the screen
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print(F("mspaint\n"));
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_V, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("%userprofile%\\a.bmp\n"));
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_F, MOD_ALT_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_B); //Set it as the background image
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke( KEY_F10, MOD_SHIFT_LEFT); //Make the actual icons invisible
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_H); //This is the keys in my country but it may be different, try f and v or v and f or just
  DigiKeyboard.delay(300);           //type shift f10 and look at the keys needed ( underlined ) to show elements on Desktop
  DigiKeyboard.sendKeyStroke(KEY_B);
}


void loop() {


}
