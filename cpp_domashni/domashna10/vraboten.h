#ifndef VRABOTEN_H
#define VRABOTEN_H

using namespace std;

class Vraboten {

    
    public:
        Vraboten();
        Vraboten(char *ime ,char *prezime,int godina);
        Vraboten  postavi();
        // char* get_ime() const;
        // char* get_prezime() const;
        // int get_godina_na_vrabotuvanje() const;
        void prikazi_podatociV() ;
    protected:
        char *ime;
        char *prezime;
        int godina;
};
#endif