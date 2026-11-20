// IR sensor inputs
const int irSensor1 = 2;
const int irSensor2 = 3;
const int irSensor3 = 4;

// Coil output pins
const int coilSet1 = 8;
const int coilSet2 = 9;
const int coilSet3 = 10;

void setup() {
  pinMode(irSensor1, INPUT);
  pinMode(irSensor2, INPUT);
  pinMode(irSensor3, INPUT);

  pinMode(coilSet1, OUTPUT);
  pinMode(coilSet2, OUTPUT);
  pinMode(coilSet3, OUTPUT);

  digitalWrite(coilSet1, HIGH);
  digitalWrite(coilSet2, HIGH);
  digitalWrite(coilSet3, HIGH);
}

void loop() {
  int sensor1 = digitalRead(irSensor1);
  int sensor2 = digitalRead(irSensor2);
  int sensor3 = digitalRead(irSensor3);

  digitalWrite(coilSet1, sensor1 == LOW ? LOW : HIGH);
  digitalWrite(coilSet2, sensor2 == LOW ? LOW : HIGH);
  digitalWrite(coilSet3, sensor3 == LOW ? LOW : HIGH);

  delay(50);
}
