#include <iostream>
using namespace std;

template<typename T>
int printArray(T arr[], int size, int lowSubscript, int highSubscript) {
    if (lowSubscript < 0 || highSubscript >= size || lowSubscript > highSubscript) {
        return 0;
    }

    int printedCount = 0;
    for (int i = lowSubscript; i <= highSubscript; i++) {
        cout << arr[i] << " ";
        printedCount++;
    }
    cout << endl;
    return printedCount;
}
int main()
{
int n,m;
cout<<"Vnesi kolku elementi sakas da ima integer nizata : " ;
cin>>n;
cout<<"Vnesi gi elementite "<<endl;
int niza[n];
for (int i = 0; i < n ; i++)
{
    cout<<"["<<i+1<<"] :";
    cin>>niza[i];
}
cout<<"Nizata integer "<<endl;
for (int i = 0; i < n ; i++)
{
  cout<<niza[i]<<" ";
}
cout<<endl;
cout<<"Vnesi kolku elementi sakas da ima double nizata : " ;
cin>>m;
cout<<"Vnesi gi elementite "<<endl;
double nizaD[m];
for (int i = 0; i < m; i++)
{
    cout<<"["<<i+1<<"] :";
    cin>>nizaD[i];
}
cout<<endl;
cout<<"Nizata double"<<endl;
for (int i = 0; i < n ; i++)
{
  cout<<nizaD[i]<<" ";
}
cout<<endl;
int low,high;

cout<<"Vnesi od koj do koj element sakas integer nizata da ti se pecati : "<<endl;
cout<<"Low: " ;
cin>>low;
cout<<"High: " ;
cin>>high;
int printed = printArray(niza, n, low-1, high-1);
if (printed == 0) {
    cout << "Nevaliden rang!" << endl;
} else {
    cout << "Isprintani " << printed << " elementi izmegju  " << low << " i " << high << endl;
}
cout<<"Vnesi od koj do koj element sakas double nizata da ti se pecati : "<<endl;
cout<<"Low: " ;
cin>>low;
cout<<"High: " ;
cin>>high;
printed = printArray(nizaD, m, low-1, high-1);
if (printed == 0) {
    cout << "Nevaliden rang!" << endl;
} else {
    cout << "Isprintani " << printed << " elementi izmegju  " << low << " i " << high << endl;
}
    return 0;
}