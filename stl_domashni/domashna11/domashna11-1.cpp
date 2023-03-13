#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream in_file("input.txt");
    ofstream out_file("output.txt");

    if (!in_file.is_open()) {
        cout << "Could not open input file!\n";
        return 1;
    }

    if (!out_file.is_open()) {
        cout << "Could not open output file!\n";
        return 1;
    }

    string word;

    while (in_file >> word) {
        if (word.length() < 10) {
            out_file << word << " ";
        }
    }

    cout << "Zborovite koi imaat pomalce od 10 karakteri se zapishani!\n";

    in_file.close();
    out_file.close();

    return 0;
}
