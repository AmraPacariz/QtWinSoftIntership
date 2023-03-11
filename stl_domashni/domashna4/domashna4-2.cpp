#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


vector<char> getCharVector(string str) {
    vector<char> charVec(str.begin(), str.end());//od string pravi vektor
    
    sort(charVec.begin(), charVec.end());//go sortira vektorot
    return charVec;//vrakja vektor sortiran
}


bool areAnagrams(string str1, string str2) {
    vector<char> charVec1 = getCharVector(str1);//prakja stringovi za da dobieme sortiran vektor
    vector<char> charVec2 = getCharVector(str2);

   
    return equal(charVec1.begin(), charVec1.end(), charVec2.begin());//proveruva dali vektorite se isti
}

int main() {
    string str1, str2;

    cout << "Vnesete dva zbora : ";
    cin >> str1 >> str2;

   
    if (areAnagrams(str1, str2)) {
        cout << "Dvata zbora se anagrami" << endl;
    }
    else {
        cout << "Dvata zbora ne se anagrami" << endl;
    }

    return 0;
}
