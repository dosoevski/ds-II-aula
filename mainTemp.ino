import serial;


int valorSensor;
int sensor = 0;

int valorTemp;
int tempera = 1;

int ledVermelho = 7;
int ledAmarelo = 9;
int ledVerde = 10;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  Serial.begin(9600);
  
}
void loop() :
  valorSensor = analogRead(sensor);

  Serial.println("=============================");

  if (valorSensor < 450) {
    digitalWrite(ledAmarelo, HIGH);
    Serial.println("Está escuro");
  } else if (valorSensor >= 450 && valorSensor < 549) {
    digitalWrite(ledVerde, HIGH);
    Serial.println("Está bom");
  } else {
    digitalWrite(ledVermelho, HIGH);
    Serial.println("Ambiente está iluminado demais");
  }

  Serial.print("Valor lido pelo sensor de luminosidade: ");
  Serial.println(valorSensor);
  Serial.println("=============================");
  Serial.println();
    delay(2000);
  
  valorTemp = analogRead(tempera);
   if (valorTemp < 90) {
    Serial.println("Está frio");
  } else if (valorTemp >= 90 && valorTemp < 180) {
    Serial.println("Está bom a temperatura");
  } else {
    Serial.println("Ambiente está quente demais");
  }

  Serial.print("Valor lido pelo sensor de temperatura: ");
  Serial.println(valorTemp);
  Serial.println();
    delay(2000);
    valorSensor = analogRead(tempera);
  
  


