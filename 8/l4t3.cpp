#include <iostream>
#include <string>
#include <vector>
using namespace std;

size_t split(const string &txt, vector<string> &strs, char ch) {
    size_t pos = txt.find( ch );
    size_t initialPos = 0;
    strs.clear();
    while (pos != string::npos) {
        strs.push_back(txt.substr(initialPos, pos - initialPos));
        initialPos = pos + 1;
        pos = txt.find(ch, initialPos);
    }
    strs.push_back(txt.substr(initialPos, min(pos, txt.size()) - initialPos + 1));
    return strs.size();
}

int main() {
    string s;
    getline(cin, s);
    vector<string> words;
    split(s, words, ' ');
    vector<int> repeatings;
    for (auto &word : words) {
        int repeated = 0;
        for (auto &r : words) if (word == r) repeated++;
        repeatings.push_back(repeated);
    }
    string s1 = to_string(repeatings[0]);
    for (int i = 1; i < repeatings.size(); i++) s1 += ' ' + to_string(repeatings[i]);
    cout << s1 << endl;
    return 0;
}
