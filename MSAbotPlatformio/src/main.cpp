#include <Manette.h>//Le dossier (pas le zip) de la librairie P2X_lib doit être dans le dossier "lib"
#include <MSAbot_Fonctions.h> //Ce fichier doit être dans le dossier "include"

Manette manette;
void conduire(); //déclaration nécessaire pour platformio seulement

void setup() {
  Serial.begin(9600);
  manette.begin();
  servoBegin();
  
}

void loop() {
  manette.read();
  conduire();

}

//La fonction qui sert à conduire avec la manette
void conduire(){
  arcadeDrive(manette.LY(), manette.RX());
}