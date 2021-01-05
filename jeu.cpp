#include "jeu.h"
#include <random>

/******

FAUT TESTER TOUS

******/

jeu::jeu(): d_ter{1000,1000,20,20,20}, d_raq{500,900,100,50}, d_b{500,800,1,10,270}
{}

void jeu::initBriques()
{

}

void jeu::avancerBalle()
{
    d_b.avancer();
}

void jeu::rebondBrique(brique& b)
{

}

void jeu::rebondTerrain()
{

}

void jeu::rebondRaquette()
{

}

void jeu::deplacerRaquette()
{
    d_raq.deplacer();
}

bool jeu::briqueDetruit(const brique &br)
{
    return br.nbColisions() == 0;
}

void jeu::loopJeu(const afficheJeu& aff)
{

}
