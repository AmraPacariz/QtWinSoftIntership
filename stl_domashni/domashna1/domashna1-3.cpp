#include <iostream>
using namespace std;
template<typename R, typename P>
R implicit_cast(const P& p) {
 return p;
}
int main() {
 int i = 1;
 float x = implicit_cast<float>(i);
 int j = implicit_cast<int>(x);
} //kraj na main 
//Се јавува грешка и без компајлиранје бидејки првиот аргумент е P а треба да вратиме R  и компајлерот не може да одреди што би требало да биде резултатниот тип.