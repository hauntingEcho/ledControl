const int PIN_R = 9;
const int PIN_G = 10;
const int PIN_B = 11;

const int POT_R = 0;
const int POT_G = 1;
const int POT_B = 2;

const int DEBOUNCE_READS=4;
const int DEBOUNCE_DELAY=50; //miliseconds

const boolean DEBUG=true;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_R, OUTPUT);
  pinMode(PIN_G, OUTPUT);
  pinMode(PIN_B, OUTPUT);
  pinMode(POT_R, INPUT);
  pinMode(POT_G, INPUT);
  pinMode(POT_B, INPUT);
  if (DEBUG) Serial.begin(9600);
}

void loop() {
  switchOne(POT_R, PIN_R);
  switchOne(POT_G, PIN_G);
  switchOne(POT_B, PIN_B);
}

void switchOne(int pinIn, int pinOut) {
  int readSum = 0;
  for (int i = 0; i < DEBOUNCE_READS; ++i) {
    delay(DEBOUNCE_DELAY);
    readSum += analogRead(pinIn);
  }
  analogWrite(pinOut, readSum / DEBOUNCE_READS);
  if (DEBUG) {
    switch (pinIn) {
      case POT_R:
        Serial.println('r');
        break;
      case POT_G:
        Serial.println('g');
        break;
      case POT_B:
        Serial.println('b');
        break;
    }
    Serial.println(readSum / DEBOUNCE_READS);
  }
}
