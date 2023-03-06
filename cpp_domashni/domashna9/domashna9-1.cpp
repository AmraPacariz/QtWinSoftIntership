#include <iostream>
#include "matrica.h"
using namespace std;

int main()
{

    Matrica prva(2,2),vtora;
    cin>>prva;
    cout<<"PRVA"<<endl;cout<<prva;
    cin>>vtora;
    cout<<"VTORA"<<endl;cout<<vtora;
    if(prva==vtora)
    {
        cout<<"PRVA e ednakva so Vtora"<<endl;
    }
    else
    {
         cout<<"PRVA ne ednakva so Vtora"<<endl;
    }
    prva=vtora;
    cout<<"PRVA"<<endl;cout<<prva;
        if(prva==vtora)
    {
        cout<<"PRVA e ednakva so Vtora"<<endl;
    }
    else
    {
         cout<<"PRVA ne ednakva so Vtora"<<endl;
    }
    Matrica treta=prva+vtora;
    cout<<"PRVA + VTORA=TRETA"<<endl;
    cout<<treta;
    prva=treta*vtora;
    cout<<"PRVA = TRETA * VTORA"<<endl;
    cout<<prva;
     prva=treta-vtora;
    cout<<"PRVA = TRETA - VTORA"<<endl;
    cout<<prva;
    
    return 0;
}