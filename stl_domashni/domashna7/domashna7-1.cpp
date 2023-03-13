#include <iostream>
#include <random>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int randomNumber()
{
    return rand() % 10000;
}

int main()
{
    const int SIZE = 10000;
    vector<int> randomList(SIZE);
    ostream_iterator<int> output(cout, " ");
    srand(time(0));

    generate(randomList.begin(), randomList.end(), randomNumber);
    copy(randomList.begin(), randomList.end(), output);

    int evenCount = count_if(randomList.begin(), randomList.end(), [](int x) { return x % 2 == 0; });
    cout << "Brojot na prani broevi vo listata e: " << evenCount << endl;

    int lower2000Count = count_if(randomList.begin(), randomList.end(), [](int x) { return x < 2000; });
    cout << "Brojot na broevi pomali od 2000 vo listata e: " << lower2000Count << endl;

    vector<int> intervals = {2000, 4000, 6000, 8000, 10000};
    for (int i = 0; i < intervals.size() - 1; i++) {
        int from = intervals[i];
        int to = intervals[i+1];
        int count = count_if(randomList.begin(), randomList.end(), [=](int x) { return x >= from && x < to; });
        cout << "Brojot na broevi vo interval od [" << from << ", " << to << ") vo listata e: " << count << endl;
    }

    double average = (double) accumulate(randomList.begin(), randomList.end(), 0) / SIZE;
    cout << "Srednata vrednost na broevite vo listata e: " << average << endl;

    return 0;
}
