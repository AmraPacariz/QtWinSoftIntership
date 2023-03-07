#ifndef VRABOTEN_H
#define VRABOTEN_H

using namespace std;

class Vraboten {
    private:
        char *ime;
        char *prezime;
        int godina;
    
    public:
        Vraboten();
        Vraboten(char* ,char*,int);
        Vraboten  postavi();
        // char* get_ime() const;
        // char* get_prezime() const;
        // int get_godina_na_vrabotuvanje() const;
        void prikazi_podatociV() const;
};
#endif