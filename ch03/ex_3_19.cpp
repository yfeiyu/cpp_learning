#include <iostream>
#include <string>
#include <vector>
using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

void printIntVec(vector<int> vec)
{
    cout << vec.size() << endl;
    for (auto i : vec)
        cout << i << " ";
    cout << endl;
}

int main()
{
    vector<int> v1(10, 42); // better
    vector<int> v2{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v3;
    for (int i = 0; i != 10; ++i)
        v3.push_back(42);
    vector<int> v4(10);
    for (auto &i : v4)
        i = 42;
    
    printIntVec(v1);
    printIntVec(v2);
    printIntVec(v3);
    printIntVec(v4);

    return 0;
}
