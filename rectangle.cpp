#include "rectangle.h"

rectangle::rectangle(double x, double y, double larg, double haut): position{x,y}, d_larg{larg}, d_haut{haut}
{}

rectangle::~rectangle()
{

}

double rectangle::largeur() const
{
    return d_larg;
}

double rectangle::hauteur() const
{
    return d_haut;
}
