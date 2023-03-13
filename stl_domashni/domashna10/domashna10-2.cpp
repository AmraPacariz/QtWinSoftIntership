#include <iostream>
#include <exception>
using namespace std;

class Motor {
public:
    Motor() {
        cout << "Inicijalizacija na motor.\n";
        throw exception();
    }
};

class Avtomobil {
public:
    Avtomobil() {
        cout << "Inicijalizacija na avtomobil.\n";
        Motor motor;
    }
};

class Garaza {
public:
    Garaza() {
        try {
            cout << "Inicijalizacija na garaza.\n";
            Avtomobil avtomobil;
        } catch (exception &e) {
             cout << "Faten e iskluchokot vo konstruktorot na Garaza\n";
            cout << "Frlam drug iskluchok.\n";
            throw exception();
        }
    }
};

int main() {
    try {
        Garaza garaza;
    } catch (exception &e) {
        cout << "Faten e iskluchokot vo main.\n";
    }

    return 0;
}
