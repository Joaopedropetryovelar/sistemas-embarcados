#define pin_led1 8           //pino 8 se chama pin_led1
#define pin_led2 9           //pino 9 se chama pin_led2
#define pin_led3 10          //pino 10 se chama pin_led3
#define pin_led4 11          //pino 11 se chama pin_led4
#define pin_botao1 2
#define pin_botao2 1

void setup() {
   pinMode(pin_led1, OUTPUT);        //definir o pin_led1 como output
  pinMode(pin_led2, OUTPUT);        //definir o pin_led2 como output
  pinMode(pin_led3, OUTPUT);        //definir o pin_led3 como output
  pinMode(pin_led4, OUTPUT);        //definir o pin_led4 como output
  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);

}

void loop() {
  bool estado1 = digitalRead(pin_botao1);
  bool estado2 = digitalRead(pin_botao2);
  if (estado1 && estado2 == 1) {
    digitalWrite(pin_led1, HIGH);
  } else {
    digitalWrite(pin_led1, LOW);
  }

  if (estado1 || estado2 == 1) {
    digitalWrite(pin_led2, HIGH);
  } else {
    digitalWrite(pin_led2, LOW);
  }

  if (estado1 ^ estado2 == 1) {
    digitalWrite(pin_led3, HIGH);
    if (estado1 == 1){
      digitalWrite(pin_led3, LOW);
        }if (estado2 == 1){
      digitalWrite(pin_led3, LOW);  
      }
  } else {
    digitalWrite(pin_led3, HIGH);
  }

}
