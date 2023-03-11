#include <iostream>
using namespace std;
template<class T>
void sortArray(T arr[], int n)
{
 for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
           swap(arr[i], arr[minIndex]);
        }
    }
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
sortArray(niza,n);
sortArray(nizaD,m);
cout<<"Nizata integer po sortiranje "<<endl;
for (int i = 0; i < n ; i++)
{
  cout<<niza[i]<<" ";
}
cout<<endl;
cout<<"Nizata double po sortiranje"<<endl;
for (int i = 0; i < n ; i++)
{
  cout<<nizaD[i]<<" ";
}
cout<<endl;
    return 0;
}