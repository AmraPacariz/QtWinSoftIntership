#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
template<typename T>
bool palindrom(vector<T> v) {
    vector<T> reversed_v(v);
    reverse(reversed_v.begin(), reversed_v.end());
    return v == reversed_v;
}
int main(){
    string s1 = "ana";
    string s2 = "pero";
    vector<char> v1(s1.begin(), s1.end());
    vector<char> v2(s2.begin(), s2.end());
    if(palindrom(v1)) {
        cout << "v1 e palindrom" << endl;
    } else {
        cout << "v1 ne e palindrom" << endl;
    }
    if(palindrom(v2)) {
        cout << "v2 e palindrom" << endl;
    } else {
        cout << "v2 ne e palindrom" << endl;
    }
    return 0;
}