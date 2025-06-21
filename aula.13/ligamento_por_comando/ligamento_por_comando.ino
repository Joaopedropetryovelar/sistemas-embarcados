#define pin_led1 8           //pino 8 se chama pin_led1
#define pin_led2 9           //pino 9 se chama pin_led2
#define pin_led3 10          //pino 10 se chama pin_led3
#define pin_led4 11          //pino 11 se chama pin_led4
#define pin_botao 2


void setup() {
  Serial.begin(9600);
  pinMode(pin_led1, OUTPUT);        //definir o pin_led1 como output
  pinMode(pin_led2, OUTPUT);        //definir o pin_led2 como output
  pinMode(pin_led3, OUTPUT);        //definir o pin_led3 como output
  pinMode(pin_led4, OUTPUT);        //definir o pin_led4 como output
  pinMode(pin_botao, INPUT);        //definir pin_botao como input


}

void loop() {
    if (Serial.available() == 1) {
    char i = Serial.read();
    Serial.print(i);
    if (i == '1') {
    digitalWrite(pin_led1, HIGH);
  }
    if (i == "2") {
    digitalWrite(pin_led2, HIGH);
  }
    if (i == "3") {
    digitalWrite(pin_led3, HIGH);
  }
    if (i == "4") {
    digitalWrite(pin_led4, HIGH);
  }
    if (i == "5") {
    digitalWrite(pin_led1, LOW);
  }
      if (i == "6") {
    digitalWrite(pin_led2, LOW);
  }
      if (i == "7") {
    digitalWrite(pin_led3, LOW);
  }
      if (i == "8") {
    digitalWrite(pin_led4, LOW);
  }
      if (i == "9") {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, HIGH);
    digitalWrite(pin_led3, HIGH);
    digitalWrite(pin_led4, HIGH);
  }
      if (i == "0"){
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, LOW);
    digitalWrite(pin_led3, LOW);
    digitalWrite(pin_led4, LOW);
  }
  }

}
