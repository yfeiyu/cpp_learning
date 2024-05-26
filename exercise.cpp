#include <iostream>
#include <vector>
#include <memory>
using std::shared_ptr;
using std::make_shared;
using std::vector;
#include <string>
using std::string;
#include <initializer_list>
using std::initializer_list;
using std::cin;using std::cout;using std::endl;

int main(int argc, char const *argv[])
{
    const char *pc = "Hello";
    char *p = const_cast<char*>(pc);
    string s = static_cast<string>(pc);
    string str(pc);

    shared_ptr<int> p3 = make_shared<int>(42);
    shared_ptr<string> p4 = make_shared<string>(10, '9');
    shared_ptr<int> p5 = make_shared<int>();

    vector<ushort> alist;
    double a = -5.0;
    alist.push_back(a * 10);
    cout << alist[0] << endl;
    cout << ushort(a * 10) << endl;
    return 0;
}

void error_msg(initializer_list<string> il)
{
    for (auto beg = il.begin(); beg != il.end(); ++beg)
        cout << *beg << " ";
    cout << endl;
}

