#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<string> text;
    for (string s; cin >> s; text.push_back(s));
    for (string &str : text) {
        for (auto &c : str) {
            c = toupper(c);
        }
    }

    for (decltype(text.size()) i = 0; i != text.size(); ++i) {
        if (i != 0 && i % 8 == 0)
            cout << endl;
        cout << text[i] << " ";
    }
    cout << endl;

    return 0;
}