#ifndef AFFICHAGEWINGBI_H
#define AFFICHAGEWINGBI_H

#include "afficheJeu.h"

/**
* Classe d' affichage.
* Basee sur la classe abstraite 'afficheJeu'. Les methodes utilise wingbi pour l'affichage graphique.
*/

class affichageWingbi: public afficheJeu
{
public:
    affichageWingbi();
    virtual ~affichageWingbi();
    virtual void afficheTerrain(const terrain& t) const override;
    virtual void afficheBalle(const balle& b) const override;
    virtual void afficheBrique(const brique& br) const override;
    virtual void afficheRaquette(const raquette& raq) const override;
};

#endif // AFFICHAGEWINGBI_H
