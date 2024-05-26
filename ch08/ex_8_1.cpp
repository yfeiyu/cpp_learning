#include <iostream>
#include <string>
using std::istream; using std::cout; using std::cin; using std::endl;
using std::string;

istream &getIstream(istream &is)
{
    string str;
    while (is >> str)
        cout << str << endl;
    is.clear();
    return is;
}

int main()
{
    istream &is = getIstream(cin);
    cout << is.rdstate() << endl;

    return 0;
}