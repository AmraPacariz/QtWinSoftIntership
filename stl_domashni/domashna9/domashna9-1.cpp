#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    vector<int> vec1, vec2;
    srand(time(nullptr)); 
    int n = rand() % 10+ 1; //1000+1
    for (int i = 0; i < n; i++) {
        vec1.push_back(rand() % 1000); 
        
    }
    int m = rand() % 10 + 1; //1000+1
    for (int i = 0; i < m; i++) {
     
        vec2.push_back(rand() % 1000); 
    }

    try {
        if (vec1.size() < vec2.size()) { 
             throw exception();
        }
        copy(vec2.begin(), vec2.end(), vec1.begin()); 
    } catch (exception &exception) {
            cout << "vec2[" << vec2.size() << "] e pogolem od vec1[" << vec1.size() <<"]"<< endl;
    }


    cout << "Vektor 1: ";
    for (auto it = vec1.begin(); it != vec1.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "Vektor 2: ";
    for (auto it = vec2.begin(); it != vec2.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
