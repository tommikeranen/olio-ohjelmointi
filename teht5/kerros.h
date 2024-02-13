#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"
#include <iostream>
using namespace std;


class Kerros
{
public:
    Kerros();
    virtual void maaritaAsunnot(void);
    double laskeKulutus(double);

private:
    asunto *as1 = new asunto();
    asunto *as2 = new asunto();
    asunto *as3 = new asunto();
    asunto *as4 = new asunto();
};

#endif // KERROS_H
