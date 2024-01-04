#include <iostream>
#include <iterator>
#include <cstddef>
#include <vector>
using std::begin;
using std::end;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    constexpr size_t size1 = 5, size2 = 5;
    int ar1[size1] = {0,1,2,3,4};
    int ar2[size2] = {0,1,2,3,4};

    int *beg1 = begin(ar1), *end1 = end(ar1);
    int *beg2 = begin(ar2), *end2 = end(ar2);
    if ((end1 - beg1) != (end2 - beg2)) {
        cout << "unequal" << endl;
        return 0;
    }
    while (beg1 != end1) {
        if (*beg1 != *beg2) {
            cout << "unequal" << endl;
            return 0;
        }
        ++beg1;
        ++beg2;
    }
    cout << "equal" << endl;

    return 0;
}