#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string text;
    vector<string> words;
    vector<string>::iterator it;
     char c;
    cout << "Vnesi tekst: ";
    getline(cin, text);

    // gi izdvojuvam zborovite od tekstot
    string word = "";
    for (auto it = text.begin(); it != text.end(); ++it) {
         c = *it;
        if (c == ' ') {
            words.push_back(word);
            word = "";
        }
        else {
            word += c;
        }
    }
    words.push_back(word);

    sort(words.begin(), words.end());


    cout << "Zborovite abecedno vo tekstot: ";
    for (int i = 0; i < words.size(); i++) {
        if (i == 0 || words[i] != words[i-1]) {
            cout << words[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
