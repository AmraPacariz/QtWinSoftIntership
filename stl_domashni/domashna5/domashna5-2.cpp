#include <iostream>
#include <list>
#include <algorithm>
using namespace std;


int main() {
    list<string> list1 {"john@example.com", "jane@example.com", "alice@example.com"};
    list<string> list2 {"jane@example.com", "bob@example.com"};
    list<string> list3 {"alice@example.com", "eve@example.com"};
    list<string> merged_list;
    merged_list.insert(merged_list.end(), list1.begin(), list1.end());
    merged_list.insert(merged_list.end(), list2.begin(), list2.end());
    merged_list.insert(merged_list.end(), list3.begin(), list3.end());

   
    merged_list.sort();

    
    merged_list.erase(unique(merged_list.begin(), merged_list.end()), merged_list.end());
     for (auto it = merged_list.begin(); it != merged_list.end(); ++it) {
       cout << *it <<endl;
    }
   cout<<endl;
    return 0;
}
