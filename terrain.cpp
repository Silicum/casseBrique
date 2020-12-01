#include "terrain.h"

terrain::terrain(double larg, double haut, double posMH, double posMG, double posMD): d_larg{larg}, d_haut{haut}, d_posMH{posMH}, d_posMG{posMG}, d_posMD{posMD}
{}

double terrain::largeur() const
{
    return d_larg;
}

double terrain::hauteur() const
{
    return d_haut;
}

double terrain::posMH() const
{
    return d_posMH;
}

double terrain::posMG() const
{
    return d_posMG;
}

double terrain::posMD() const
{
    return d_posMD;
}
