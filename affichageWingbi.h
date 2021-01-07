#ifndef AFFICHAGEWINGBI_H
#define AFFICHAGEWINGBI_H

#include "afficheJeu.h"

/**
* Classe d' affichage.
* Basee sur la classe abstraite 'afficheJeu'. Les methodes utilisent wingbi pour l'affichage graphique.
*/

class affichageWingbi: public afficheJeu
{
public:
    affichageWingbi();
    virtual ~affichageWingbi();
    virtual void afficherMurs(const terrain& t) const override;
    virtual void afficherBalle(const balle& b) const override;
    virtual void afficherBrique(const brique& br) const override;
    virtual void afficherRaquette(const raquette& raq) const override;
    virtual void initFenetre(const terrain& t) const override;
    virtual void fermerFenetre() const override;
    virtual void affichage(const terrain& t, const balle& b, const std::vector<brique>& briques, const raquette& raq) const override;
};

#endif // AFFICHAGEWINGBI_H
