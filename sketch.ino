#define Button 10
#define rot 11
#define gelb 12
#define gruen 13

#define FGrot 8
#define FGgruen 9

bool Zustand = LOW;

void setup() {

  pinMode(Button, INPUT_PULLUP);
  pinMode(rot, OUTPUT);
  pinMode(gelb, OUTPUT);
  pinMode(gruen, OUTPUT);
  pinMode(FGrot, OUTPUT);
  pinMode(FGgruen, OUTPUT);
// Anfangszustand -> Autos gruen & Fußgänger rot
  digitalWrite(gruen, HIGH);
  digitalWrite(FGrot, HIGH);

}

void loop() {
  // wenn der Button nicht gedrückt wurde = LOW
  if (digitalRead(Button) == LOW){
    Zustand = true;
  }
  if (Zustand) {

    delay(1000);
    digitalWrite(gruen, LOW);
    digitalWrite(gelb, HIGH);
    digitalWrite(rot, LOW);
    delay(2000);

    digitalWrite(gruen, LOW);
    digitalWrite(gelb, LOW);
    digitalWrite(rot, HIGH);
    digitalWrite(FGrot, LOW);
    digitalWrite(FGgruen, HIGH);
    delay(8000);

    digitalWrite(FGrot, HIGH);
    digitalWrite(FGgruen, LOW);
    digitalWrite(rot, LOW);
    digitalWrite(gelb, HIGH);
    delay(2000);
    digitalWrite(gelb, LOW);
    digitalWrite(gruen, HIGH);
  

  Zustand = false;

  }
}    