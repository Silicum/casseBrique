#include "balle.h"
#include <cmath>

/******

FAUT TESTER

******/

balle::balle(double x, double y, double vit, double r, double angle): position{x,y}, d_vit{vit}, d_r{r}, d_angle{angle}
{}

balle::~balle()
{}

double balle::vitesse() const
{
    return d_vit;
}


double balle::rayon() const
{
    return d_r;
}

double balle::angle() const
{
    return d_angle;
}

/******

FAUT TESTER

******/

void balle::avancer()
{
    double radians = (M_PI / 180.0) * d_angle;
    d_x += d_vit*cos(radians);
    d_y += d_vit*sin(radians);
}
