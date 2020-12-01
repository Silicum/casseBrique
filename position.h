#ifndef POSITION_H
#define POSITION_H

class position
{
public:
    position(double x, double y);
    virtual ~position();
    /**
    * Methode qui retourne d_x
    */
    double posX() const;
    /**
    * Methode qui retourne d_y
    */
    double posY() const;

protected:
    double d_x; /**< Coordonee x */
    double d_y; /**< Coordonee y */
};
#endif // POSITION_H
