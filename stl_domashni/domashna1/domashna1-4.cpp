#include <iostream>
using namespace std;
template< class T >  
void printArray( const T *arr, const int size )
{    for (int i = 0; i < size; i++) {
       cout.width(4);
       cout << arr[i]<<" ";
        if ((i + 1) % 4 == 0) {
           cout <<endl;
        }
    }
    if (size % 4 != 0) {
       cout <<endl;
    }
    cout << endl;
    cout<<"Pecatam od template"<<endl;
} 

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
       cout.width(4);
       cout << arr[i];
        if ((i + 1) % 4 == 0) {
           cout <<endl;
        }
    }
    if (size % 4 != 0) {
       cout <<endl;
    }
    cout<<"Pecatam od fukcija"<<endl;
}
int main()
{
     int intArr[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    
    cout << "Printing array of ints:" << endl;
    printArray(intArr, 12);
    cout << endl;

   
    double doubleArr[12] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.10, 11.11, 12.12};

    cout << "Printing array of doubles:" << endl;
    printArray(doubleArr,12);
    cout << endl;

    
    char charArr[12] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l'};

    cout << "Printing array of chars:" << endl;
    printArray(charArr, 12);
   return 0;
} 
