#include <iostream>
#include <vector>
#include <string>
#include <new>
using std::nothrow;
using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

int main(int argc, char const *argv[])
{
    int *pi = new int(1024);
    string *ps = new string(10, '9');
    vector<int> *pv = new vector<int>{0,1,2,3,4,5,6,7,8,9};

    int *pi1 = new int;
    int *pi2 = new int();

    const int *pci = new const int(1024);
    const string *pcs = new const string;

    int *p2 = new (nothrow) int;
    delete p2;

    return 0;
}
