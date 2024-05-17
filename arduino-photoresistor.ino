int led = 8;
int bt = 9;
int photo = A0;
int LeituroPhoto = 0;
int ledLuz = 10;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(ledLuz, OUTPUT);
  pinMode(bt, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(led) == HIGH) {
    LeituroPhoto = analogRead(photo);

    if (LeituroPhoto > 990) {
      digitalWrite(ledLuz, HIGH);
    } else {
      digitalWrite(ledLuz, LOW);
    }

    if (digitalRead(bt) == HIGH) {
      digitalWrite(led, LOW);
      digitalWrite(ledLuz, LOW);
    }
  } else {
    if (digitalRead(bt) == HIGH) {
      digitalWrite(led, HIGH);
    }
  }

  delay(5000);
}