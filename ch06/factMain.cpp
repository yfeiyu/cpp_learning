#include <iostream>
#include "Chapter6.h"
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a;
    cin >> a;
    int res = fact(a);
    cout << res << endl;

    return 0;
}