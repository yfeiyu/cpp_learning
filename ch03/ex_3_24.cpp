#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<int> vec;
    for (int num; cin >> num; vec.push_back(num));
    if (vec.begin() == vec.end()) {
        return -1;
    }
    for (auto it = vec.begin(); it != vec.end() - 1; ++it)
        cout << *it + *(it+1) << endl;
    auto mid = vec.begin() + (vec.end() - vec.begin())/2;
    for (auto it = vec.begin(), it2 = vec.end() - 1; it < it2; ++it, --it2)
        cout << *it + *it2 << endl;

    return 0;
}