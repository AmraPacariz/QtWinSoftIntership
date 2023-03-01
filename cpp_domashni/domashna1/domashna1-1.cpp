/*Напиши С++ програм кој користи inline функција circleArea која бара влез од корисникот за радиус на круг,
ја пресметува и ја печати површината на кругот.*/
#include <iostream>

using namespace std;

inline float circleArea(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    float radius;

    cout << "Vnesete go radiusot na krugot: ";
    cin >> radius;

    cout << "Povrshinata na krugot so radius " << radius << " e: " << circleArea(radius);

    return 0;
}
