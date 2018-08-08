#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H


#include "Geometria.h"

class Triangulo: Geometria {
public:
    float alfa;
public:
    float getAlfa() const;

    void setAlfa(float alfa);

    float getArea();

    float getPerim ();
};


#endif //REPASO_TRIANGULO_H
