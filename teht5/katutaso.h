#ifndef KATUTASO_H
#define KATUTASO_H

#include <iostream>
using namespace std;

#include "kerros.h"



class Katutaso : public Kerros
{
public:
    Katutaso();
    virtual void maaritaAsunnot(void) override;
    double laskeKulutus(double);

private:
    asunto *as1 = new asunto();
    asunto *as2 = new asunto();
};

#endif // KATUTASO_H
