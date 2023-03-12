#include <iostream>
#include <deque>
#include <vector>
using namespace std;
int main() {
  deque<int> d = {1, 2, 3, 4, 5}; 

  vector<int> v(d.rbegin(), d.rend()); 

  cout << "Deque: ";
  for (auto it = d.begin(); it != d.end(); ++it) {
    cout << *it << " ";
  }

  cout<<endl;
  cout << "Vector : ";
  for (auto it = v.begin(); it != v.end(); ++it) {
    cout << *it << " ";
  }

  return 0;
}
