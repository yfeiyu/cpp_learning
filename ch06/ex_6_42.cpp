#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::endl;

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main(int argc, char const *argv[])
{
    string suc("success"), fail("failure");
    string a, b, c, d;
    a = make_plural(1, suc, "es");
    b = make_plural(2, suc, "es");
    c = make_plural(1, fail);
    d = make_plural(2, fail);
    cout << a << " " << b << " " << c << " " << d << endl;
    return 0;
}
