const int verde = 6;
const int amarelo = 9;
const int vermelho = 12;

void setup() {
  pinMode(verde,OUTPUT);
  pinMode(amarelo,OUTPUT);
  pinMode(vermelho,OUTPUT);
}

void loop() { 
    digitalWrite(verde, HIGH);
    delay(3000);
    digitalWrite(verde, LOW);
    delay(100);

    digitalWrite(amarelo, HIGH);
    delay(1500);
    digitalWrite(amarelo, LOW);
    delay(100);

    digitalWrite(vermelho, HIGH);
    delay(3000);
    digitalWrite(vermelho, LOW);
    delay(100);
}
