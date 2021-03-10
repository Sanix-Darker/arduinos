// This file will contains all necessary stuff
// for the keyboard management
//
// By darker

#include <Keypad.h>

const byte ROWS = 4;
const byte COLS = 4;

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte rowPins[ROWS] = {9, 8, 7, 6};
byte colPins[COLS] = {5, 4, 3, 2};

Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

/**
* A small bip with a LED or abuzzer just as a temoin
* of each keypress
*
* bip : void
**/
void bip()
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
}

/**
* This method is an infinite loop that get characters comming
* from the keypad and returning it as a string
*
* input_keyboard : char *
**/
char* input_keyboard()
{
    char* input;
    char customKey;
    while(customKey != 'D'){
        customKey = customKeypad.getKey();
        if (customKey){
            // We append the character to the 
            // array of char
            strncat(input, &customKey, 1);
       }
    }
    return input;
}

