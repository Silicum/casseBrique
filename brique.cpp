#include "brique.h"

/******

FAUT TESTER

******/

brique::brique(double x, double y, double larg, double haut, int nbCol, int type): rectangle{x,y,larg,haut}, d_nbCol{nbCol}, d_type{type}
{}

brique::~brique()
{}

int brique::nbColisions() const
{
    return d_nbCol;
}

int brique::typeBrique() const
{
    return d_type;
}
