#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str;
    // 每次读入一个词
    while (cin >> str) {
        cout << str << endl;
    }

    return 0;
}