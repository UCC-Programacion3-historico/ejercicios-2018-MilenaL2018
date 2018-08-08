#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    Calculadora <int> micalc;
    Calculadora <double> micalcDouble;

    cout << micalc.sumar(2,3) << endl;
    cout << micalc.restar(1,7) << endl;
    cout << micalc.multiplicar(2,1) << endl;

    try {
        cout << micalc.dividir(7,0) << endl;
    } catch (int e) {
        cout << "Error:" << e << endl;
    }

    cout << micalcDouble.sumar(0.5,0.07) << endl;
    return 0;
}