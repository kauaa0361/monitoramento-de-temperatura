
const int pinTempSensor = A0;
const int pinLed = 6;
const int pinBuzzer = 7;
const int pinFanMotor = 8;

void setup() {

  Serial.begin(9600);
  pinMode(pinFanMotor, OUTPUT);
  pinMode(pinBuzzer, OUTPUT);
  pinMode(pinLed, OUTPUT);
  pinMode(pinTempSensor, INPUT);
}

void loop() {

  int tempValue = analogRead(pinTempSensor);
  float tempCelsius = (5.0 * tempValue * 100.0) / 1024.0;

  Serial.print("Temperatura: ");
  Serial.print(tempCelsius);
  Serial.println(" C");

  if (tempCelsius >= 30) {
    digitalWrite(pinFanMotor, HIGH);
  } else {
    digitalWrite(pinFanMotor, LOW);
  }

  if (tempCelsius > 50) {
    digitalWrite(pinBuzzer, HIGH);
    digitalWrite(pinLed, HIGH);
  } else {
    digitalWrite(pinBuzzer, LOW);
    digitalWrite(pinLed, LOW);
  }
  delay(1000);
}
