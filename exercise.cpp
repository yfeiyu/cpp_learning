#include <iostream>
#include <vector>
using std::vector;
#include <string>
using std::string;
#include <initializer_list>
using std::initializer_list;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
    const char *pc = "Hello";
    char *p = const_cast<char*>(pc);
    string s = static_cast<string>(pc);
    string str(pc);

    int a[5] = { 1, 3, 2, 4, 6 };
    for (int i : a)
        cout << i << " ";
    cout << endl;
    return 0;
}

void error_msg(initializer_list<string> il)
{
    for (auto beg = il.begin(); beg != il.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}

