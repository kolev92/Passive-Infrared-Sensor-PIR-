int pirPin=2;
int motion;
int led=13;

void setup() {
Serial.begin(9600);
pinMode (led, OUTPUT);
pinMode(pirPin, INPUT);
}

void loop() {
motion=digitalRead(pirPin);
Serial.println(motion);

switch (motion) {

case 1: {
  digitalWrite(led, HIGH);
  break;
}

case 0: {
  digitalWrite(led, LOW);
  break;
}
}
delay(300);
}
