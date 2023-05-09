#ifndef CHESSLIB
#define CHESSLIB

#include "chessman.h"

class Wizir : virtual public Figure
{
  public:
    Wizir(char* p) : Figure(p) {};
    Wizir() {};
    char isa() { return 'W';};
    int attack(char*);
};

class Bishop : virtual public Figure
{
  public:
    Bishop(char* p) : Figure(p) {};
    Bishop() {};
    char isa() { return 'B';};
    int attack(char*);
};

class Target : public Wizir, public Bishop
{
  public:
    Target(char* p) : Figure(p) {};
    char isa() { return 'T';};
    int attack(char*);
};

#endif