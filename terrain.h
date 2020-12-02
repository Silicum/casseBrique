#ifndef TERRAIN_H
#define TERRAIN_H

/**
* Classe qui represente le terrain du jeu.
* Elle contient ses dimensions (largeur, hauteur) et les positions des murs par rapport au bord du terrain.
*/

class terrain
{
public:
    /**
    * Constructeur.
    * Initialise les donnees du terrain avec celles passees en paramentre.
    */
    terrain(double larg, double haut, double posMH, double posMG, double posMD);
    /**
    * Methode qui retourne d_larg
    */
    double largeur() const;
    /**
    * Methode qui retourne d_haut
    */
    double hauteur() const;
    /**
    * Methode qui retourne d_posMH
    */
    double posMH() const;
    /**
    * Methode qui retourne d_posMG
    */
    double posMG() const;
    /**
    * Methode qui retourne d_posMD
    */
    double posMD() const;

private:
    double d_larg; /**< Largeur du terrain */
    double d_haut; /**< Hauteur du terrain */
    double d_posMH; /**< Ecart entre le bord du terrain et le mur en haut */
    double d_posMG; /**< Ecart entre le bord du terrain et le mur a gauche */
    double d_posMD; /**< Ecart entre le bord du terrain et le mur a droite */
};
#endif // TERRAIN_H
