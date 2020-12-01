#ifndef TERRAIN_H
#define TERRAIN_H

class terrain
{
public:
    terrain(double larg, double haut, double posMH, double posMG, double posMD);
    double largeur() const;
    double hauteur() const;
    double posMH() const;
    double posMG() const;
    double posMD() const;

private:
    double d_larg;
    double d_haut;
    double d_posMH;
    double d_posMG;
    double d_posMD;
};
#endif // TERRAIN_H
