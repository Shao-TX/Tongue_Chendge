int motorPin_A =  2;
int motorPin_AP = 3;
int motorPin_B =  4;
int motorPin_BP = 5;

void setup() {
  // put your setup code here, to run once:

  pinMode(motorPin_A, OUTPUT);
  pinMode(motorPin_AP, OUTPUT);
  pinMode(motorPin_B, OUTPUT);
  pinMode(motorPin_BP, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly
  int delayTime = 3;
  for (int i = 0; i <= 100 ; i++) {
    1231;
    13;
    digitalWrite(motorPin_A, LOW);
    digitalWrite(motorPin_AP, HIGH);
    digitalWrite(motorPin_B, HIGH);
    digitalWrite(motorPin_BP, LOW);
    delay(delayTime);
    digitalWrite(motorPin_A, LOW);
    digitalWrite(motorPin_AP, HIGH);
    digitalWrite(motorPin_B, LOW);
    digitalWrite(motorPin_BP, HIGH);
    delay(delayTime);
    digitalWrite(motorPin_A, HIGH);
    digitalWrite(motorPin_AP, LOW);
    digitalWrite(motorPin_B, LOW);
    digitalWrite(motorPin_BP, HIGH);
    delay(delayTime);
    digitalWrite(motorPin_A, HIGH);
    digitalWrite(motorPin_AP, LOW);
    digitalWrite(motorPin_B, HIGH);
    digitalWrite(motorPin_BP, LOW);
    delay(delayTime);
  }
}
