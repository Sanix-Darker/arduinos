String input;

void setup() {
  Serial.begin(9600);
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(5000);                       // wait for a second

  // A comming function declared in another ino file in this project
  Serial_print();
 
  // To receive a char and show it
  if (Serial.available() > 0) {
    input = Serial.readString();
  
    Serial.println(input.toInt());
  }
}
