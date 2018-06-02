const int _soundPin = A2;
const int _threshHold = 100;
const int _laserPin = 9;

bool _toggleLaser = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(_soundPin, INPUT);
  pinMode(_laserPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorRead = analogRead(_soundPin);

  if(sensorRead >= _threshHold){
    _toggleLaser = !_toggleLaser;

    if(_toggleLaser) {
      digitalWrite(_laserPin, HIGH);
      delay(1000);
    }
    else {
      digitalWrite(_laserPin, LOW);
      delay(1000);
    }
  }
}
