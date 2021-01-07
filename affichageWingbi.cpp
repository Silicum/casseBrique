#include "affichageWingbi.h"
#include "graphics.h"
#include "winuser.h"

affichageWingbi::affichageWingbi(): afficheJeu()
{}

affichageWingbi::~affichageWingbi()
{}

/******

FAUT TESTER TOUS

******/

void affichageWingbi::afficherMurs(const terrain& t) const
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

void affichageWingbi::afficherBalle(const balle& b) const
{
    int border_color = WHITE;
    circle(b.posX(),b.posY(),b.rayon());
    setfillstyle(SOLID_FILL, BLUE);
    floodfill(b.posX(),b.posY(),border_color);
}

void affichageWingbi::afficherBrique(const brique& br) const
{
    int border_color = WHITE;
    rectangle(br.pointHG().posX(),br.pointHG().posY(),br.pointBD().posX(),br.pointBD().posY());
    setfillstyle(SOLID_FILL, br.typeBrique()+1);
    floodfill(br.pointHG().posX() + 10, br.pointHG().posY() + 10, border_color);
}

void affichageWingbi::afficherRaquette(const raquette& raq) const
{
    int border_color = WHITE;
    rectangle(raq.pointHG().posX(),raq.pointHG().posY(),raq.pointBD().posX(),raq.pointBD().posY());
    setfillstyle(SOLID_FILL, GREEN);
    floodfill(raq.pointHG().posX() + 5, raq.pointHG().posY() + 5, border_color);
}

void affichageWingbi::initFenetre(const terrain& t) const
{
    opengraphsize(t.largeur(),t.hauteur());
}

void affichageWingbi::fermerFenetre() const
{
    closegraph();
}

void affichageWingbi::affichage(const terrain& t, const balle& b, const std::vector<brique>& briques, const raquette& raq) const
{
    setactivepage(1);

    cleardevice();
    afficherBalle(b);
    afficherMurs(t);
    afficherRaquette(raq);
    for(int i = 0; i < briques.size(); ++i)
    {
        afficherBrique(briques[i]);
    }

    setvisualpage(1);

    setactivepage(0);

    cleardevice();
    afficherBalle(b);
    afficherMurs(t);
    afficherRaquette(raq);
    for(int i = 0; i < briques.size(); ++i)
    {
        afficherBrique(briques[i]);
    }

    setvisualpage(0);
}
