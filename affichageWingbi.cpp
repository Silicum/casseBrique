#include "affichageWingbi.h"
#include "graphics.h"

affichageWingbi::affichageWingbi(): afficheJeu()
{}

affichageWingbi::~affichageWingbi()
{}

/******

FAUT TESTER TOUS

******/

void affichageWingbi::afficheTerrain(const terrain& t) const
{
    rectangle(0,0,t.largeur(),t.posMH());
    rectangle(t.largeur() - t.posMD(),0,t.largeur(),t.hauteur());
    rectangle(0,0,t.posMG(),t.hauteur());

    setfillstyle(SOLID_FILL, RED);

    int border_color = WHITE;

    floodfill(t.largeur() / 2, t.posMH() - 10, border_color);
    floodfill(t.posMG() - 10, t.hauteur()/2, border_color);
    floodfill(t.largeur() - 10, t.hauteur()/2, border_color);
}

void affichageWingbi::afficheBalle(const balle& b) const
{
    int border_color = WHITE;
    circle(b.posX(),b.posY(),b.rayon());
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(b.posX(),b.posY(),border_color);
}

void affichageWingbi::afficheBrique(const brique& br) const
{
    int border_color = WHITE;
    rectangle(br.pointHG().posX(),br.pointHG().posY(),br.pointBD().posX(),br.pointBD().posY());
    setfillstyle(SOLID_FILL, br.typeBrique());
    floodfill(br.pointHG().posX() + 10, br.pointHG().posY() + 10, border_color);
}

void affichageWingbi::afficheRaquette(const raquette& raq) const
{
    int border_color = WHITE;
    rectangle(raq.pointHG().posX(),raq.pointHG().posY(),raq.pointBD().posX(),raq.pointBD().posY());
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(raq.pointHG().posX() + 10, raq.pointHG().posY() + 10, border_color);
}
