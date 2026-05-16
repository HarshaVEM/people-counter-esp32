// ESP32 Bidirectional People Counter

int sensor1 = 4;
int sensor2 = 5;

int count = 0;

void setup() {
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(sensor1) == HIGH) {
    delay(200);
    if (digitalRead(sensor2) == HIGH) {
      count++;
      Serial.println("Entry Detected");
      Serial.print("Count: ");
      Serial.println(count);
      delay(1000);
    }
  }

  if (digitalRead(sensor2) == HIGH) {
    delay(200);
    if (digitalRead(sensor1) == HIGH) {
      count--;
      Serial.println("Exit Detected");
      Serial.print("Count: ");
      Serial.println(count);
      delay(1000);
    }
  }
}
