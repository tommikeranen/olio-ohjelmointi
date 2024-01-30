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
public:
    ItalianChef(string n) : Chef(n){
        //cout << "Chef " << name << " konstruktori\n";
    }

    ~ItalianChef(){
        //cout << "Chef " << name << " destruktori\n";
    }

    string getName(){
        return name;
    }

    void makePasta(){
        cout << "Chef " << name <<" makes pasta\n";
    }

};

int main()
{
    Chef chef1("Jyrki");
    ItalianChef chef2("Mario");

    chef1.makeSalad();
    chef2.makePasta();
    chef1.makeSoup();

    return 0;
}
