#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num;
    vector<int> vec;
    while (cin >> num) {
        vec.push_back(num);
    }
    for (auto n : vec)
        cout << n << " ";
    cout << endl;
    return 0;
}
