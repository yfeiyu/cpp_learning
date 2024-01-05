#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<int> vec{1, 3, 5, 2, 4, 6};
    for (auto i : vec)
        cout << i << " ";
    cout << endl;

    return 0;
}