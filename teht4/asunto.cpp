#include "asunto.h"
#include <iostream>

using namespace std;

Asunto::Asunto()
{
    cout << "Asunto luotu.\n";
}

void Asunto::maarita(int asukasMaara, int neliot){
    cout << "Asunto maaritetty, asukkaita " << asukasMaara << ", nelioita " << neliot <<"\n";
}

double Asunto::laskeKulutus(double a){
    cout << "Kerrostalon kulutus, = 2800\n";
}
