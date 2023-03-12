#include <iostream>
#include <queue>
#include <utility>
using namespace std;
//resavam taka da najgolem prioritet ima najmaliot broj 
int main() {
    priority_queue<pair<int, int>, vector<pair<int, int>>,greater<pair<int, int>>> pq;
    int n, id, priority;
    cout << "Vnesi broj na procesi: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Vnesi go ID-to i prioritetot na procesot  " << i + 1 << ": ";
        cin >> id >> priority;
        pq.push(make_pair(priority, id));
    }
    cout << "Redosled na izvrsuvanje na procesite: ";

     while (!pq.empty()) {
        cout << "(" << pq.top().second << ", " << pq.top().first << ") ";
        pq.pop();
    }
    cout << endl;
    return 0;
}
