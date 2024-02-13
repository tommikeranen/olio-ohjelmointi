#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>
using namespace std;
#include "katutaso.h"
#include "kerros.h"

class Kerrostalo
{
public:
    Kerrostalo();
    double laskeKulutus(double);

private:
    Katutaso *eka = new Katutaso();
    Kerros *toka = new Kerros();
    Kerros *kolmas = new Kerros();
};

#endif // KERROSTALO_H
