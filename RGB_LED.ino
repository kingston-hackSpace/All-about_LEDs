int RED_PIN = 6;
int GREEN_PIN = 9;
int BLUE_PIN = 10;


void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
}

void loop() {
  analogWrite(RED_PIN, 0);   // Red fully on
  analogWrite(GREEN_PIN, 255);
  analogWrite(BLUE_PIN, 255);
  delay(1000);

  analogWrite(RED_PIN, 255);
  analogWrite(GREEN_PIN, 0); // Green fully on
  analogWrite(BLUE_PIN, 255);
  delay(1000);

  analogWrite(RED_PIN, 255);
  analogWrite(GREEN_PIN, 255);
  analogWrite(BLUE_PIN, 0);  // Blue fully on
  delay(1000);
}