#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string total, str;

    while (cin >> str) {
        total += (total.empty() ? "" : " ") + str;
    }
    cout << total << endl;

    return 0;
}