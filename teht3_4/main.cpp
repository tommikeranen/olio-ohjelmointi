#include <iostream>
#include <string>

using namespace std;

class Chef{
private:

protected:
    string name;

public:
    Chef(string n) : name(n){
        cout << "Chef " << name << " konstruktori\n";
    }

    ~Chef(){
        cout << "Chef " << name << " destruktori\n";
    }

    void makeSalad(){
        cout << "Chef " << name << " makes salad\n";
    }
    void makeSoup(){
        cout << "Chef " << name << " makes soup\n";
    }
};

class ItalianChef: public Chef{
private:
    int jauhoMaara, vesiMaara;

public:
    ItalianChef(string n, int jauho, int vesi) : Chef(n), jauhoMaara(jauho), vesiMaara(vesi){
        //cout << "Chef " << name << " konstruktori\n";
    }

    ~ItalianChef(){
        //cout << "Chef " << name << " destruktori\n";
    }

    string getName(){
        return name;
    }

    void makePasta(){
        cout << "Chef " << name <<" makes pasta with special recipe\n";
        cout << "Chef " << name <<" uses jauhot = " << jauhoMaara << "\n";
        cout << "Chef " << name <<" uses vesi = " << vesiMaara << "\n";
    }

};

int main()
{
    //Chef chef1("Jyrki");
    ItalianChef chef2("Mario", 250, 100);

    chef2.makePasta();

    return 0;
}
