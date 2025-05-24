#define pin_led1 8           //pino 8 se chama pin_led1
#define pin_led2 9           //pino 9 se chama pin_led2
#define pin_led3 10          //pino 10 se chama pin_led3
#define pin_led4 11          //pino 11 se chama pin_led4

void setup() {
  Serial.begin(9600);
  pinMode(pin_led1, OUTPUT);        //definir o pin_led1 como output
  pinMode(pin_led2, OUTPUT);        //definir o pin_led2 como output
  pinMode(pin_led3, OUTPUT);        //definir o pin_led3 como output
  pinMode(pin_led4, OUTPUT);        //definir o pin_led4 como output

}

void loop() {
  if (Serial.available() == 1) {
    char i = Serial.read();
    Serial.print(i);
  }
  Serial.println("Liga led");
  digitalWrite(pin_led1, HIGH);        //pin_led1 ligado
  digitalWrite(pin_led2, HIGH);        //pin_led2 ligado
  digitalWrite(pin_led3, HIGH);        //pin_led3 ligado
  digitalWrite(pin_led4, HIGH);        //pin_led4 ligado
  delay(1000);      //um pequeno atraso de 1 segundo
  Serial.println("Desliga led");
  digitalWrite(pin_led1, LOW);        //pin_led1 desligado
  digitalWrite(pin_led2, LOW);        //pin_led2 desligado
  digitalWrite(pin_led3, LOW);        //pin_led3 desligado
  digitalWrite(pin_led4, LOW);        //pin_led4 desligado
  delay(1000);      //um pequeno atraso de 1 segundo 
 

}
