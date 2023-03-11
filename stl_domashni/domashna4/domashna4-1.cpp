#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Imenik {
private:
    string ime;
    string tel_broj;

public:
    Imenik(string ime, string tel_broj) {
        this->ime = ime;
        this->tel_broj = tel_broj;
    }

    string getIme() const {
        return ime;
    }

    string getTelBroj() const {
        return tel_broj;
    }
};

bool operator<(const Imenik& i1, const Imenik& i2) {
    return i1.getIme() < i2.getIme();
}

int main() {
    vector<Imenik> imenik;
    vector< Imenik >::iterator i;
    imenik.push_back(Imenik("Bojan", "071234567"));
    imenik.push_back(Imenik("Dejan", "073456789"));
    imenik.push_back(Imenik("Ana", "070123456"));
    imenik.push_back(Imenik("Cvetan", "072345678"));


    cout<<"Pred sortiranje"<<endl;
    for ( i = imenik.begin(); i != imenik.end(); ++i )
        cout << i->getIme() << " " << i->getTelBroj() << "\n";
    cout<<endl;
    
    sort(imenik.begin(), imenik.end());
    
    cout<<"Po sortiranje"<<endl;
    for ( i = imenik.begin(); i != imenik.end(); ++i )
        cout << i->getIme() << " " << i->getTelBroj() << "\n";
    cout<<endl;

    return 0;
}
