#include "raquette.h"
#include <winuser.h>

raquette::raquette(double x1, double y1, double x2, double y2): rectangle{x1,y1,x2,y2}
{}

raquette::~raquette()
{}

void raquette::deplacerGauche()
{
  if(GetAsyncKeyState(VK_LEFT))
  {
    d_HG.d_x -= 10;
    d_BD.d_x -= 10;
  }
}

void raquette::deplacerDroite()
{
  if(GetAsyncKeyState(VK_RIGHT))
  {
    d_HG.d_x += 10;
    d_BD.d_x += 10;
  }
}
