/*
  Blink
*/

//#define DEBUG

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void blink(int dur) {
  #ifdef DEBUG
    Serial.println(dur);
  #endif
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(dur);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(dur);                       // wait for a second
}

// the loop function runs over and over again forever
void loop() {
  blink(1000);
  blink(500);
}
