#include "position.h"


position::position(double x, double y): d_x{x}, d_y{y}
{}

position::~position()
{}

double position::posX() const
{
    return d_x;
}


double position::posY() const
{
    return d_y;
}
