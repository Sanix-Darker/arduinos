
// All principals variables
String number;


void setup()
{
    Serial.begin(9600);

    // Initiation of the LCD
    init_lcd();
}

void loop()
{
    print_lcd("Hello there !!!", 0, 0);
    
    number = String(input_keyboard());
    printt();
}

