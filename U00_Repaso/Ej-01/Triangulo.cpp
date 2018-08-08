#include "Triangulo.h"

float Triangulo::getAlfa() const {
    return alfa;
}

void Triangulo::setAlfa(float alfa) {
    Triangulo::alfa = alfa;
}

float Triangulo::getArea() { return ancho * alto / 2; }

float Triangulo::getPerim() { return ( ancho + alto ) / 2;}