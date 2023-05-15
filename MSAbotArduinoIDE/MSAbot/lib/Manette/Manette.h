#ifndef MANETTE_H
#define MANETTE_H
#include <Arduino.h>
#include <PS2X_lib.h>

//Le librairie PS2X_lib doit être dans le dossier "lib" du projet

class Manette{

    public:
    Manette();
    void begin();//À mettre dans le setup
    void read();//À mettre dans le loop
    

    int axis(byte axe);
    int LY();
    int LX();
    int RY();
    int RX();

    bool bouton (int bouton, bool uneFois);
    bool triangle();
    bool triangleUneFois();
    bool square();
    bool squareUneFois();
    bool circle();
    bool circleUneFois();
    bool cross();
    bool crossUneFois();
    bool dPadUp();
    bool dPadUpUneFois();
    bool dPadRight();
    bool dPadRightUneFois();
    bool dPadDown();
    bool dPadDownUneFois();
    bool dPadLeft();
    bool dPadLeftUneFois();
    bool start();
    bool startUneFois();
    bool select();
    bool selectUneFois();
    bool L2();
    bool L2UneFois();
    bool R2();
    bool R2UneFois();
    bool L1();
    bool L1UneFois();
    bool R1();
    bool R1UneFois();
    bool LJoystickButton();
    bool LJoystickButtonUneFois();
    bool RJoystickButton();
    bool RJoystickButtonUneFois();



    
    private:
    PS2X _ps2x;
    byte _axe;
    int _bouton;
    bool _uneFois;

        
};


#endif
