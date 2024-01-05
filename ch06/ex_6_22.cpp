#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swapPoint(int *&p, int *&q)
{
    int *ptemp = p;
    p = q;
    q = ptemp;
}

int main(int argc, char const *argv[])
{
    int a = 100, b = 200;
    int *pa = &a, *pb = &b;
    cout << *pa << " " << *pb << endl;
    swapPoint(pa, pb);
    cout << *pa << " " << *pb << endl;
    return 0;
}
