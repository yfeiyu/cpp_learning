#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string line;
    // 每次读入一行
    while (getline(cin, line)) {
        cout << line << endl;
    }

    return 0;
}