#include <iostream>
#include <cctype>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
    vector<string> vec{"hello", "", "I am Jack", "", "Nice to meet you"};
    for (auto it = vec.begin(); it != vec.end() && !(*it).empty(); ++it) {
        for (auto &c : (*it))
            c = toupper(c);
        cout << *it << endl;
    }

    return 0;
}