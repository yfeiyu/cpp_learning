#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    if (s1 == s2)
        cout << "The two strings are equal." << endl;
    // 输出较大的字符串
    else
        cout << "The larger string is " << ((s1 > s2) ? s1 : s2) << endl;

    return 0;
}