#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<unsigned> scores(11, 0);
    unsigned grade;
    auto beg = scores.begin();
    while (cin >> grade) {
        if (grade <= 100) {
            auto it = beg + grade / 10;
            *it += 1;
        }
    }

    for (auto i : scores)
        cout << i << " ";
    cout << endl;

    return 0;
}