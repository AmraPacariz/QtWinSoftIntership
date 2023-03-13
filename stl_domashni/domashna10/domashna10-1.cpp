#include <iostream>
#include <exception>

using namespace std;

class Objekt {
public:
    Objekt()
    {
        cout << "Konstruktor:Kreiran e objektot. \n";
        
    }
    ~Objekt()
    {
        cout << "Destruktor:Unisten e objektot.\n";
    }
};

int main()
{
    Objekt* objekt ;
    try
    {
        objekt = new Objekt();
        throw exception();
    }
    catch(exception &e)
    {
        cout << "Vlegovme vo Exception"<<endl;
        cout<<"Ne se povikuva destruktorot na Objekt."<<endl;
     
    }
    cout<<"Kje go izbrisham pokazuvacot"<<endl;
    delete objekt;
    cout<<"Tek sega se povika destruktorot"<<endl;

    return 0;
}
