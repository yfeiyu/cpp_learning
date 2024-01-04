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
    for (decltype(vec.size()) i = 0; (i + 1) != vec.size(); ++i) {
        cout << vec[i] + vec[i+1] << endl;
    }

    for (decltype(vec.size()) i = 0; i != vec.size() / 2; ++i) {
        cout << vec[i] + vec[vec.size() - 1 - i] << endl;
    }

    return 0;
}