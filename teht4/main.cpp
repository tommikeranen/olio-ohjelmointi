#include <iostream>
#include "asunto.h"

using namespace std;

class Kerros{
public:
    Kerros(){
        cout << "Kerros luotu\n";
    }
    virtual void maaritaAsunnot(){
        cout << "Asunto maaritetty, asukkaita " << "2" << ", nelioita " << "100" <<"\n";
        as1;
    }
private:
    Asunto as1, as2, as3, as4;
};

class Katutaso: public Kerros{
public:
    Katutaso(){
        cout << "Katutaso luotu\n";
    }
    void maaritaAsunnot(){
        cout << "Asunto maaritetty, asukkaita " << "2" << ", nelioita " << "100" <<"\n";
    }
    double laskeKulutus(double a);
private:
    Asunto as1, as2;

};

class Kerrostalo{
private:
    Katutaso eka;
    Kerros toka, Kolmas;
public:
    double laskeKulutus(double a);
};

int main()
{

    Kerros kerros1;

    Katutaso katutaso1;

    Asunto asunto1;

    cout << "Maaritetaan 2 kpl katutason asuntoja\n";

    katutaso1.maaritaAsunnot();

    asunto1.maarita(2, 100);


    cout << "Maaritetaan katotason kerrokselta perittyja asuntoja\n";

    cout << "Maaritetaan 4kpl kerroksen asuntoja\n";
    kerros1.maaritaAsunnot();

    Kerrostalo kerrostalo1;

    asunto1.laskeKulutus(1);

    return 0;
}
