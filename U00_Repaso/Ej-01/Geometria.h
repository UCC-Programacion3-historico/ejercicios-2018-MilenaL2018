#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H

#include "Color.h"

class Geometria {
protected:
    float alto;
    float ancho;
    color col;
public:
    void getCol (){ return col; }

    float getAlto() const;

    void setAlto(float alto);

    float getAncho() const;

    void setAncho(float ancho);
};


#endif //REPASO_GEOMETRIA_H
