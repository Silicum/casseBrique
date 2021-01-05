#include "rectangle.h"

rectangle::rectangle(double x1, double y1, double x2, double y2): d_HG{x1,y1}, d_BD{x2,y2}
{}

rectangle::~rectangle()
{}

position rectangle::pointHG() const
{
    return d_HG;
}

position rectangle::pointBD() const
{
    return d_BD;
}
