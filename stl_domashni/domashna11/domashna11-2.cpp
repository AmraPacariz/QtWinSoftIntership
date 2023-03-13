#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int n, m;
    cout << "Vnesi broj na redici (n): ";
    cin >> n;
    cout << "Vnesi sirina na kolonite (m): ";
    cin >> m;
    cout<<endl;
    cout << setw(m) << "i" << setw(m) << "i^2" << setw(m) << "sqrt(i)" << setw(m) << "cbrt(i)" << endl;
    for (int i = 1; i <= n; i++) {
        cout << setw(m) << i << setw(m) << i*i << setw(m) << setprecision(4) << fixed << sqrt(i) << setw(m) << setprecision(4) << fixed << cbrt(i) << endl;
    }
    return 0;
}
