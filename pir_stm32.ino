byte sensorPin = PB10;
byte indicator = PB11;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(indicator, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(sensorPin) == HIGH) {
    Serial.println("Intrusion detecte");
    digitalWrite(indicator, HIGH);
  }
  if (digitalRead(sensorPin) == LOW) {
    Serial.println("Pas de présence");
    digitalWrite(indicator, LOW);
  }
  delay(1000);
}
