#include "Manette.h" //Il faut utiliser Croquis -> Inclure une bibliothèque -> Ajouter Bibliothèque .ZIP 
                     //pour ajouter les dossiers "PS2X_lib" et "Manette" qui se trouvent dans le dossier "lib"
#include "MSAbot_Fonctions.h"  //Ce fichier doit être dans le même dossier que ce fichier .ino

Manette manette;

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
