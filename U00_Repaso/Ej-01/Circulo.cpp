
#include "Circulo.h"

float Circulo::getR() const {
    return r;
}

void Circulo::setR(float r) {
    Circulo::r = r;
}

#define PI 3.1415926

double Circulo::getSup() { return r * r * PI; }

double Circulo::getPer() { return r * PI * 2; }