#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str;
    vector<string> vec;
    while (cin >> str) {
        vec.push_back(str);
    }
    for (auto s : vec)
        cout << s << " ";
    cout << endl;
    return 0;
}
