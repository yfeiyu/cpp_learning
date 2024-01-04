#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<int> vec{-2, 0, 1, 2, 4 , 3, 5, 7, 8, 9};
    for (auto it = vec.begin(); it != vec.end(); ++it)
        *it *= 2;
    for (auto i : vec)
        cout << i << " ";
    cout << endl;

    return 0;
}