#include <iostream>
#include <cstddef>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    constexpr size_t size = 10;
    int array[size];
    for (size_t i = 0; i < size; ++i)
        array[i] = i;
    for (auto n : array)
        cout << n << " ";
    cout << endl;

    return 0;
}