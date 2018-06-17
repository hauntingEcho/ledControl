const int PIN_R = 9;
const int PIN_G = 10;
const int PIN_B = 11;

const int POT_R = 0;
const int POT_G = 1;
const int POT_B = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_R, OUTPUT);
  pinMode(PIN_G, OUTPUT);
  pinMode(PIN_B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly: 
  delay(1000);
  analogWrite(PIN_R, 255);
  delay(1000);
  analogWrite(PIN_G, 255);
  delay(1000);
  analogWrite(PIN_B, 255);
  delay(1000);
  analogWrite(PIN_R, 0);
  delay(1000);
  analogWrite(PIN_G, 0);
  delay(1000);
  analogWrite(PIN_B, 0);
}
