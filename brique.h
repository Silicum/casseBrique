#ifndef BRIQUE_H
#define BRIQUE_H
#include "rectangle.h"

/**
* Classe pour l' objet brique.
* Elle contient les donnees d' un brique et herite de rectangle.
*/

class brique: public rectangle
{
public:
    brique(double x, double y, double larg, double haut, int nbCol, int type);
    virtual ~brique();
    int nbColisions() const;
    int typeBrique() const;

    static const int NORMAL = 0;
    static const int DURE = 1;
    static const int MOLLE = 2;
    static const int TUEUSE = 3;

private:
    int d_nbCol;
    int d_type;
};

#endif // BRIQUE_H
