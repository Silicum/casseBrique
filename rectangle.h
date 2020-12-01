#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "position.h"

class rectangle: public position
{
public:
    rectangle(double x, double y, double larg, double haut);
    virtual ~rectangle();
    double largeur() const;
    double hauteur() const;
private:
    double d_larg;
    double d_haut;
};
#endif // RECTANGLE_H
