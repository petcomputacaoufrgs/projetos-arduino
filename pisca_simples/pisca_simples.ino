int PIN_13 = 13;

void setup()
{
  pinMode(PIN_13, OUTPUT);
}

void loop()
{
  digitalWrite(PIN_13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(PIN_13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}