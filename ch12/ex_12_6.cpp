#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

vector<int> *new_vecInt()
{
    return new vector<int>;
}

auto read_vecInt(vector<int> *pv)
{
    int a;
    while (cin >> a)
        pv->push_back(a);
    return pv;
}

auto print_vecInt(vector<int> *pv) -> std::ostream&
{
    for (auto i : *pv)
        cout << i << " ";
    return cout;
}

int main(int argc, char const *argv[])
{
    vector<int> *pv = read_vecInt(new_vecInt());
    print_vecInt(pv) << endl;
    delete pv;

    return 0;
}
