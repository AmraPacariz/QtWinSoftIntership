#include <iostream>

using namespace std;

template<typename T>
T sum_array(T arr[], int start, int end, T init_value = T())
{
    T sum = init_value;
    for(int i = start; i <= end; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(){
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
    int low,high;
    cout<<"Vnesi od koj do koj element sakas integer nizata da ti se sobira : "<<endl;
    cout<<"Low: " ;
    cin>>low;
    cout<<"High: " ;
    cin>>high;
    int int_sum = sum_array(niza, low, high);
    cout<<"Vnesi od koj do koj element sakas double nizata da ti se sobira : "<<endl;
    cout<<"Low: " ;
    cin>>low;
    cout<<"High: " ;
    cin>>high;
    double double_sum = sum_array(nizaD, low, high);
    cout << "Suma od int niza: " << int_sum << endl;
    cout << "Suma od double niza: " << double_sum << endl;

    return 0;
}
