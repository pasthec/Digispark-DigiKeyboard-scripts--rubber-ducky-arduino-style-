#include "DigiKeyboard.h"
void setup() {
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT );
  
  DigiKeyboard.delay(500);  

  DigiKeyboard.print(F("cmd\n"));
  
  DigiKeyboard.delay(500);

  DigiKeyboard.print(F("cd Desktop& notepad matrix.bat\n")); //create a script
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  
  DigiKeyboard.print(F("@echo off\ncolor a\n: start\necho %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random% %random%\ngoto start"));
  DigiKeyboard.delay(300);
  
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT); //save it
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(400);

  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_ALT_LEFT); // go fullscreen
  DigiKeyboard.print(F("matrix.bat\n"));  //launch "the matrix"

  DigiKeyboard.delay(2500); // stop it
  DigiKeyboard.sendKeyStroke(KEY_C, MOD_CONTROL_LEFT );
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_O);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  // Print HACKED in big shiny letters
  DigiKeyboard.print(F("echo            .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------.& echo           ^| .--------------. ^|^| .--------------. ^|^| .--------------. ^|^| .--------------. ^|^| .--------------. ^|^| .--------------. ^|& echo           ^| ^|  ____  ____  ^| ^|^| ^|      __      ^| ^|^| ^|     ______   ^| ^|^| ^|  ___  ____   ^| ^|^| ^|  _________   ^| ^|^| ^|  ________    ^| ^|& echo           ^| ^| ^|_   ^|^|   _^| ^| ^|^| ^|     /  \\     ^| ^|^| ^|   .' ___  ^|  ^| ^|^| ^| ^|_  ^|^|_  _^|  ^| ^|^| ^| ^|_   ___  ^|  ^| ^|^| ^| ^|_   ___ `.  ^| ^|& echo           ^| ^|   ^| ^|__^| ^|   ^| ^|^| ^|    / /\\ \\    ^| ^|^| ^|  / .'   \\_^|  ^| ^|^| ^|   ^| ^|_/ /    ^| ^|^| ^|   ^| ^|_  \\_^|  ^| ^|^| ^|   ^| ^|   `. \\ ^| ^|& echo           ^| ^|   ^|  __  ^|   ^| ^|^| ^|   / ____ \\   ^| ^|^| ^|  ^| ^|         ^| ^|^| ^|   ^|  __'.    ^| ^|^| ^|   ^|  _^|  _   ^| ^|^| ^|   ^| ^|    ^| ^| ^| ^|& echo           ^| ^|  _^| ^|  ^| ^|_  ^| ^|^| ^| _/ /    \\ \\_ ^| ^|^| ^|  \\ `.___.'\\  ^| ^|^| ^|  _^| ^|  \\ \\_  ^| ^|^| ^|  _^| ^|___/ ^|  ^| ^|^| ^|  _^| ^|___.' / ^| ^|& echo           ^| ^| ^|____^|^|____^| ^| ^|^| ^|^|____^|  ^|____^|^| ^|^| ^|   `._____.'  ^| ^|^| ^| ^|____^|^|____^| ^| ^|^| ^| ^|_________^|  ^| ^|^| ^| ^|________.'  ^| ^|& echo           ^| ^|              ^| ^|^| ^|              ^| ^|^| ^|              ^| ^|^| ^|              ^| ^|^| ^|              ^| ^|^| ^|              ^| ^|& echo           ^| '--------------' ^|^| '--------------' ^|^| '--------------' ^|^| '--------------' ^|^| '--------------' ^|^| '--------------' ^|& echo            '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------'\n"));
}


void loop() {
  
}
