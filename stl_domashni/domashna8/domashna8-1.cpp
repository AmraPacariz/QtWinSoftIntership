#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <numeric>

using namespace std;

class Vraboten {
public:
    string ime;
    int bodovi;

    Vraboten(string ime, int bodovi) {
        this->ime = ime;
        this->bodovi = bodovi;
    }
    int getBodovi(){return bodovi;}
};
bool sporedibodovi(Vraboten v1, Vraboten v2);
int main() {
   
    vector<Vraboten> vraboteni {
        Vraboten("Vraboten 1", 20),
        Vraboten("Vraboten 2", 15),
        Vraboten("Vraboten 3", 30),
        Vraboten("Vraboten 4", 25)
    };


    cout << "Vraboteni:" << endl;
     for (auto it  = vraboteni.begin(); it != vraboteni.end(); ++it) {
        cout << it->ime << " - "<<it->bodovi<<endl;
    }

    
    int vrednost_na_bod; 
    cout<<"Vnesi vrednost na bod : ";
    cin>>vrednost_na_bod;
    int vkupno = accumulate(vraboteni.begin(), vraboteni.end(), 0, [&](int a, const Vraboten& b) {
        return a + b.bodovi * vrednost_na_bod;
    });

    sort(vraboteni.begin(), vraboteni.end(), sporedibodovi);

    cout<<endl;
    cout << "Sortirani vrabotenite sopored bodovi:" << endl;
    for (auto it  = vraboteni.begin(); it != vraboteni.end(); ++it) {
            cout << it->ime << ": " << it->bodovi << endl;
        }

    cout<<endl;
    cout << "Vkupna suma: " << vkupno << endl;

    return 0;
}
bool sporedibodovi(Vraboten v1, Vraboten v2)
{
    return v1.getBodovi() > v2.getBodovi();
}