/*Нaпиши С++ програм со две посебни функции кои едноставно ја триплираат вредноста на променливата count дефинирана во main. Овие функции се:
a.	Функцијата tripleCallByValue која предава копија од count, ја триплира нејзината вредност и ја враќа новата вредност
b.	Функцијата tripleCallByReference која ja предава count како референцен параметар, ја триплира самата променлива и ја враќа новата вредност 
на count
*/
#include <iostream>

using namespace std;

int tripleCallByValue(int count) {
    return count * 3;
}

void tripleCallByReference(int& count) {
    count *= 3;
}

int main() {
    int count = 5;

    cout << "Pocetna vrednost na count: " << count << endl;
    cout << "tripleCallByValue(count): " << tripleCallByValue(count) << endl;
    cout << "Vrednosta na count po tripleCallByValue(count) e : " << count << endl;
    cout << "Vrednost na count: " << count << endl;
     tripleCallByReference(count);
    cout << "Vrednosta na count po tripleCallByReference(count) e : " << count << endl;
  
    return 0;
}
