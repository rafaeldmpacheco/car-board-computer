//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// car-board-computer
// 
// Made by rafaeldmpacheco
// License: CC-BY-SA 3.0

int ledG = 13;
int ledR = 12;
int ledB = 11;
int porta = 1;
int cinto = 3;
int marcha = 5;
int embreagem = 7; 

void setup() {
  
  pinMode(ledG, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(porta, INPUT);
  pinMode(cinto, INPUT);
  pinMode(marcha, INPUT);
  pinMode(embreagem, INPUT);
}
void loop() {
   porta = digitalRead(porta);
   cinto = digitalRead(cinto);
   marcha = digitalRead(marcha);
   embreagem = digitalRead(embreagem);
   
if (porta == true && cinto == false && marcha == false && embreagem == false){
	digitalWrite(ledG, HIGH);
	digitalWrite(ledB, LOW);
	digitalWrite(ledR, LOW);
	}
else{
    digitalWrite(ledR, LOW);
	digitalWrite(ledB, LOW);
    digitalWrite(ledG, LOW);
	}
}
