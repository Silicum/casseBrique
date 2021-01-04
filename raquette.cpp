#include "raquette.h"
#include <winuser.h>

raquette::raquette(double x1, double y1, double x2, double y2): rectangle{x1,y1,x2,y2}
{}

raquette::~raquette()
{}

void raquette::deplacer()
{
  if(GetAsyncKeyState(VK_LEFT))
  {
    d_x -= 10;
  }
  else if(GetAsyncKeyState(VK_RIGHT))
  {
    d_y += 10;
  }
}
