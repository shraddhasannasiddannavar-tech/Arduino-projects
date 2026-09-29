const int ldrPin = A0;

const int redLED = 8;
const int yellowLED = 9;
const int greenLED = 10;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int lightLevel = analogRead(ldrPin);

  Serial.println(lightLevel);

  if (lightLevel < 400) {
    // Dark: red light
    digitalWrite(redLED, HIGH);
    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, LOW);
  } 
  else {
    // Bright: normal traffic sequence
    digitalWrite(redLED, HIGH);
    delay(3000);

    digitalWrite(redLED, LOW);
    digitalWrite(yellowLED, HIGH);
    delay(1000);

    digitalWrite(yellowLED, LOW);
    digitalWrite(greenLED, HIGH);
    delay(3000);

    digitalWrite(greenLED, LOW);
  }
}