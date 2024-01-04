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

    // 输出长度较大的字符串
    if (s1.size() == s2.size())
        cout << "The two strings have the same length." << endl;
    else
        cout << "The longer string is " << ((s1.size() > s2.size()) ? s1 : s2) << endl;

    return 0;
}