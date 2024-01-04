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
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";
    cout << endl;
}

void printStrVec(vector<string> vec)
{
    cout << vec.size() << endl;
    for (auto it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";
    cout << endl;
}

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 42);
    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    printIntVec(v1);
    printIntVec(v2);
    printIntVec(v3);
    printIntVec(v4);
    printIntVec(v5);
    printStrVec(v6);
    printStrVec(v7);

    return 0;
}