const int _buttonPin = 9;
const int _laserPin = 3;

int buttonState = 0;
int laserFlag = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(_buttonPin, INPUT_PULLUP);
  pinMode(_laserPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(_buttonPin);
  
  if(buttonState == LOW) {
    if(laserFlag == 0) {
      digitalWrite(_laserPin, HIGH);
      laserFlag = 1;
      delay(200);
    }
    else if (laserFlag == 1) {
      digitalWrite(_laserPin, LOW);
      laserFlag = 0;
      delay(200);
    }
  }
}
