#include "jeu.h"
#include <random>
#include "graphics.h"
#include <iostream>
#include <ctime>

jeu::jeu(): d_ter{1600,1000,20,20,20}, d_briques{0,brique(0,0,0,0,0,0)}, d_raq{650,950,850,960}, d_b{750,850,10,10,270}
{}

void jeu::initBriques()
{
    d_briques.reserve(30);
    std::default_random_engine gen{static_cast<long unsigned int>(time(0))};
    std::uniform_int_distribution<> distr1(40, 80);
    std::uniform_int_distribution<> distr2(1, 3);
    std::uniform_int_distribution<> distr3(0, 3);

    double positionHorizontale, positionVerticale;
    int i = 0;

    for(i; i < 10; ++i)
    {
        positionHorizontale = d_ter.posMG() + i*150 + distr1(gen);
        positionVerticale = d_ter.posMH() + distr1(gen);
        d_briques.push_back(brique(positionHorizontale, positionVerticale ,positionHorizontale + 100 , positionVerticale + 50, distr2(gen), distr3(gen)));
    }
    for(i; i < 20; ++i)
    {
        positionHorizontale = d_ter.posMG() + (i-10)*150 + distr1(gen);
        positionVerticale = d_ter.posMH() + distr1(gen) + 200;
        d_briques.push_back(brique(positionHorizontale, positionVerticale ,positionHorizontale + 100 , positionVerticale + 50, distr2(gen), distr3(gen)));

    }
    for(i; i < 30; ++i)
    {
        positionHorizontale = d_ter.posMG() + (i-10)*200 + distr1(gen);
        positionVerticale = d_ter.posMH() + distr1(gen) + 400;
        d_briques.push_back(brique(positionHorizontale, positionVerticale ,positionHorizontale + 100 , positionVerticale + 50, distr2(gen), distr3(gen)));
    }

}

void jeu::briquePlusBas()
{
    double temp = 0;

    for (int i = 0; i < d_briques.size(); ++i)
    {
        if(temp < d_briques[i].pointBD().posY())
        {
            temp = d_briques[i].pointBD().posY();
        }
    }

    d_lowestBrique = temp;
}

bool jeu::rebondBriqueVertical(brique& b)
{
    if (d_b.angle() == 270)
    {
        d_b.d_angle -= 135;
    }
    else if (d_b.angle() == 90)
    {
        d_b.d_angle = 360 - d_b.d_angle - 135;
    }
    else if (d_b.angle() > 0 && d_b.angle() < 90)
    {
        d_b.d_angle = 360 - d_b.d_angle - 90;
    }
    else if (d_b.angle() > 90 && d_b.angle() < 180)
    {
        d_b.d_angle += 90;
    }
    else if (d_b.angle() > 180 && d_b.angle() < 270)
    {
        d_b.d_angle -= 90;
    }
    else if (d_b.angle() > 270 && d_b.angle() < 360)
    {
        d_b.d_angle = 360 - d_b.d_angle;
    }

    d_b.avancer();
    d_b.avancer();
    b.d_nbCol--;

    if(b.typeBrique() == b.MOLLE && d_b.vitesse() > 5)
    {
        d_b.d_vit -= 1;
    }
    else if (b.typeBrique() == b.DURE)
    {
        d_b.d_vit += 1;
    }

    return !(b.typeBrique() == b.TUEUSE);
    //return true;
}

bool jeu::rebondBriqueHorizontal(brique& b)
{
    if(d_b.angle() == 0 || d_b.angle() == 180)
    {
        d_b.d_angle += 135;
    }
    else if (d_b.angle() > 0 && d_b.angle() < 90)
    {
       d_b.d_angle += 90;
    }
    else if (d_b.angle() > 90 && d_b.angle() < 180)
    {
        d_b.d_angle -= 90;
    }
    else if (d_b.angle() > 180 && d_b.angle() < 270)
    {
        d_b.d_angle += 90;
    }
    else if (d_b.angle() > 270 && d_b.angle() < 360)
    {
        d_b.d_angle -= 90;
    }

    d_b.avancer();
    d_b.avancer();
    b.d_nbCol--;

    if(b.typeBrique() == b.MOLLE && d_b.vitesse() > 5)
    {
        d_b.d_vit -= 1;
    }
    else if (b.typeBrique() == b.DURE)
    {
        d_b.d_vit += 1;
    }

    return !(b.typeBrique() == b.TUEUSE);
    //return true;
}

void jeu::rebondMurDG()
{
    if(d_b.angle() == 0 || d_b.angle() == 180)
    {
        d_b.d_angle += 135;
    }
    else if (d_b.angle() > 0 && d_b.angle() < 90)
    {
       d_b.d_angle += 90;
    }
    else if (d_b.angle() > 90 && d_b.angle() < 180)
    {
        d_b.d_angle -= 90;
    }
    else if (d_b.angle() > 180 && d_b.angle() < 270)
    {
        d_b.d_angle += 90;
    }
    else if (d_b.angle() > 270 && d_b.angle() < 360)
    {
        d_b.d_angle -= 90;
    }

    d_b.avancer();
}


void jeu::rebondMurHaut()
{
    if (d_b.angle() == 270)
    {
        d_b.d_angle -= 135;
    }
    else if (d_b.angle() > 180 && d_b.angle() < 270)
    {
        d_b.d_angle -= 90;
    }
    else if (d_b.angle() > 270 && d_b.angle() < 360)
    {
        d_b.d_angle = 360 - d_b.d_angle;
    }

    d_b.avancer();
}

void jeu::rebondRaquette()
{
    if (d_b.angle() == 90)
    {
        d_b.d_angle = 360 - d_b.d_angle - 45;
    }
    else if (d_b.angle() > 0 && d_b.angle() < 90)
    {
        d_b.d_angle = 360 - d_b.d_angle;
    }
    else if (d_b.angle() > 90 && d_b.angle() < 180)
    {
        d_b.d_angle += 90;
    }

    d_b.avancer();
}


bool jeu::collision()
{
    double limiteHaut = d_b.posY() - d_b.rayon();
    double limiteBas = d_b.posY() + d_b.rayon();
    double limiteGauche = d_b.posX() - d_b.rayon();
    double limiteDroite = d_b.posX() + d_b.rayon();

    if(limiteHaut > d_lowestBrique)
    {
        if (limiteBas >= d_raq.pointHG().posY() && limiteGauche <= d_raq.pointBD().posX() && limiteDroite >= d_raq.pointHG().posX())
        {
            rebondRaquette();
            return true;
        }
        else if (limiteDroite >= d_ter.largeur() - d_ter.posMD() || limiteGauche <= d_ter.posMG())
        {
            rebondMurDG();
            return true;
        }
        else if (limiteBas >= d_ter.hauteur())
        {
            getch();
            return false;
        }
    }
    else
    {
        if (limiteDroite >= d_ter.largeur() - d_ter.posMD() || limiteGauche <= d_ter.posMG())
        {
            rebondMurDG();
            return true;
        }
        else if (limiteHaut <= d_ter.posMH())
        {
            rebondMurHaut();
            return true;
        }
        else
        {
            int i = 0;
            while (i < d_briques.size())
            {
                if ((limiteBas >= d_briques[i].pointHG().posY() && limiteHaut < d_briques[i].pointHG().posY()))
                {
                    if (limiteGauche <= d_briques[i].pointBD().posX() && limiteDroite >= d_briques[i].pointHG().posX())
                    {
                        rebondBriqueVertical(d_briques[i]);
                        if (d_briques[i].nbColisions() == 0)
                        {
                            d_briques.erase(d_briques.begin() + i);
                        }
                    }
                }
                else if (limiteHaut <= d_briques[i].pointBD().posY() && limiteBas > d_briques[i].pointBD().posY())
                {
                    if (limiteGauche <= d_briques[i].pointBD().posX() && limiteDroite >= d_briques[i].pointHG().posX())
                    {
                        rebondBriqueVertical(d_briques[i]);
                        if (d_briques[i].nbColisions() == 0)
                        {
                            d_briques.erase(d_briques.begin() + i);
                        }
                    }
                }
                else if (limiteDroite >= d_briques[i].pointHG().posX() && limiteGauche < d_briques[i].pointHG().posX())
                {
                    if(limiteHaut <= d_briques[i].pointBD().posY() && limiteBas >= d_briques[i].pointHG().posY())
                    {
                        rebondBriqueHorizontal(d_briques[i]);
                        if (d_briques[i].nbColisions() == 0)
                        {
                            d_briques.erase(d_briques.begin() + i);
                        }
                    }
                }
                else if (limiteGauche <= d_briques[i].pointBD().posX() && limiteDroite > d_briques[i].pointBD().posX())
                {
                    if(limiteHaut <= d_briques[i].pointBD().posY() && limiteBas >= d_briques[i].pointHG().posY())
                    {
                        rebondBriqueHorizontal(d_briques[i]);
                        if (d_briques[i].nbColisions() == 0)
                        {
                            d_briques.erase(d_briques.begin() + i);
                        }
                    }
                }
                ++i;
            }
        }
    }

    return true;
}

bool jeu::raquetteLimiteGauche()
{
    return (d_raq.pointHG().posX() <= d_ter.posMG());
}

bool jeu::raquetteLimiteDroite()
{
    return (d_raq.pointBD().posX() >= d_ter.largeur() - d_ter.posMD());
}

void jeu::deplacerRaquette()
{
    if(raquetteLimiteGauche())
    {
        d_raq.deplacerDroite();
    }
    else if (raquetteLimiteDroite())
    {
        d_raq.deplacerGauche();
    }
    else
    {
        d_raq.deplacerGauche();
        d_raq.deplacerDroite();
    }
}

void jeu::loopJeu()
{
    d_aff.initFenetre(d_ter);
    initBriques();
    briquePlusBas();
    d_aff.affichage(d_ter,d_b,d_briques,d_raq);

    bool running = true;

    while(running && d_briques.size() > 0)
    {
        deplacerRaquette();
        d_b.avancer();
        running = collision();
        d_aff.affichage(d_ter,d_b,d_briques,d_raq);
        delay(1);
    }

    getch();
    d_aff.fermerFenetre();

}
