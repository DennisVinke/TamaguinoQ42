/*
  Dino.h - Dino class for Tamaquino code.
  
*/
#ifndef Dino_h
#define Dino_h

#include "Arduino.h"

class Dino
{
  public:
    Dino();
    void walk(bool dir);
    void dash();
    void attack();
  private:
    uint8_t posX;
    uint8_t posY;
    bool dir;
};

#endif
