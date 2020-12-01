#ifndef RAQUETTE_H
#define RAQUETTE_H
#include "rectangle.h"

class raquette: public rectangle
{
public:
    raquette(double x, double y, double larg, double haut);
    ~raquette();
    void deplacer();
};
#endif // RAQUETTE_H
