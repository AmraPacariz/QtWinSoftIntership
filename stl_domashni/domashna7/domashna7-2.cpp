#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <random>

using namespace std;
int proverivrednost(char proverka2);
int main(){

  
 std::ostream_iterator<std::pair<std::string, char>> output(std::cout, "\n");
    vector<pair<string, char>> shpil = {
            {"srce", 'A'}, {"srce", '2'}, {"srce", '3'}, {"srce", '4'}, {"srce", '5'}, {"srce", '6'}, {"srce", '7'}, {"srce", '8'}, {"srce", '9'}, {"srce", 'T'}, {"srce", 'J'}, {"srce", 'Q'}, {"srce", 'K'},
            {"detelina", 'A'}, {"detelina", '2'}, {"detelina", '3'}, {"detelina", '4'}, {"detelina", '5'}, {"detelina", '6'}, {"detelina", '7'}, {"detelina", '8'}, {"detelina", '9'}, {"detelina", 'T'}, {"detelina", 'J'}, {"detelina", 'Q'}, {"detelina", 'K'},
            {"list", 'A'}, {"list", '2'}, {"list", '3'}, {"list", '4'}, {"list", '5'}, {"list", '6'}, {"list", '7'}, {"list", '8'}, {"list", '9'}, {"list", 'T'}, {"list", 'J'}, {"list", 'Q'}, {"list", 'K'},
            {"baklava", 'A'}, {"baklava", '2'}, {"baklava", '3'}, {"baklava", '4'}, {"baklava", '5'}, {"baklava", '6'}, {"baklava", '7'}, {"baklava", '8'}, {"baklava", '9'}, {"baklava", 'T'}, {"baklava", 'J'}, {"baklava", 'Q'}, {"baklava", 'K'}
    };

    random_device rd;
    default_random_engine rng(rd());

    shuffle(shpil.begin(), shpil.end(), rng);

    int brIgraci;
    cout<<"Vnesi broj na igraci: ";
    cin>>brIgraci;
    int kartiIgrac;
    kartiIgrac=52/brIgraci;
    if(brIgraci<2 || brIgraci>52){
        cout<<"Pogreshen vnes na igraci"<<endl;
        return 0;
    }
    int brojac=0;
    int suma=0;
    string proverka;
   char proverka2;
   int vrednost;
    int max=0;
    int igrac=0;
 for(int i=0;i<brIgraci;i++)
    {   
    suma=0;
   
    cout<<"\nIgracot "<<i+1<<" gi ima slednive karti: "<<endl;
    brojac+=kartiIgrac;
   for (auto it = shpil.begin()+brojac;i==brIgraci-1? it!=shpil.end() : it != shpil.begin()+brojac+kartiIgrac;++it) {//moram so usovot da vidam dali sum do posledniot igrac za ne iskocam nadvor od vektorot
        cout << it->first<<"-"<<it->second<< "  ";
         proverka=it->first;
         proverka2=it->second;
         vrednost=proverivrednost(proverka2);
        if(proverka=="srce")
        {
            suma=suma+vrednost*2;
        }
        else
            suma=suma+vrednost;
    }
    cout<<endl;
    cout<<"Sumata na igracot  "<<i+1<<" e : "<<suma<<endl;
     max < suma ? (max = suma, igrac = i) : max;
 }
 cout<<endl;
 cout<<"POBEDNIK e igracot :"<<igrac+1<<" so suma : "<<max<<endl;
    return 0;
}
int proverivrednost(char proverka2)
{
    switch (proverka2)
    {
    case  'A':
        return 1;
        break;
    case  '2':
        return 2;
        break;
    case  '3':
        return 3;
        break;
    case  '4':
        return 4;
        break;
    case  '5':
        return 5;
        break;
    case  '6':
        return 6;
        break;
    case  '7':
        return 7;
        break;
    case  '8':
        return 8;
        break;
    case  '9':
        return 9;
        break;
    case  'T':
    case  'J':
    case  'Q':
    case  'K':
        return 10;
        break;
                                             
    default:
        break;
    }
    return 0;
}