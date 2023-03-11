#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


class Kvadrat {
public:
    Kvadrat(double s = 0.0)  {strana=s;}
    double plostina() const { return strana * strana; }
    double getStrana() const { return strana; }
private:
    double strana;
};


class Pravoagolnik {
public:
    Pravoagolnik(double s = 0.0, double d = 0.0)  {sirina=s;dolzina=d;}
    double plostina() const { return sirina * dolzina; }
    double getSirina() const { return sirina; }
    double getDolzina() const { return dolzina; }
private:
    double sirina;
    double dolzina;
};

template<class T>
void sortirajPole(T* arr, int size)
{
    for(int i = 0; i < size - 1; ++i)
    {
        for(int j = i + 1; j < size; ++j)
        {
            if(arr[i].plostina() > arr[j].plostina())
            {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template<class T>
void pecatiPole(T* arr, int size)
{
    for(int i = 0; i < size; ++i)
    {
        cout << arr[i].plostina() << " ";
    }
    cout << endl;
}



int main() {

   Kvadrat kvadrati[3] = { Kvadrat(5.0), Kvadrat(2.5), Kvadrat(3.0) };
   Pravoagolnik pravoagolnici [3] = { Pravoagolnik(4.0, 3.0), Pravoagolnik(2.0, 8.0), Pravoagolnik(1.5, 6.0) };


    cout << "Kvadratite se:" << endl;
    pecatiPole(kvadrati,3);
    cout << "Pravoagolnicite se:" << endl;
    pecatiPole(pravoagolnici,3);

    sortirajPole(kvadrati,3);
    sortirajPole(pravoagolnici,3);


    cout << "Kvadratite po sortiranje:" << endl;
    pecatiPole(kvadrati,3);
    cout << "Pravoagolnicite po sortiranje:" << endl;
    pecatiPole(pravoagolnici,3);

    return 0;
}