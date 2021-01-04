#include "brique.h"

/******

FAUT TESTER

******/

brique::brique(double x1, double y1, double x2, double y2, int nbCol, int type): rectangle{x1,y1,x2,y2}, d_nbCol{nbCol}, d_type{type}
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
