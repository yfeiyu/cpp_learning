#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string str("a simple string");

    // decltype(str.size()) index = 0;
    // while (index != str.size()) {
    //     str[index] = 'X';
    //     ++index;
    // }
    for (decltype(str.size()) index = 0; index != str.size(); ++index)
        str[index] = 'X';
    cout << str << endl;

    return 0;
}