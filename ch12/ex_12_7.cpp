#include <iostream>
#include <vector>
#include <string>
#include <memory>
using std::shared_ptr;
using std::make_shared;
using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;

shared_ptr<vector<int>> new_vecInt()
{
    return make_shared<vector<int>>();
}

auto read_vecInt(shared_ptr<vector<int>> pv)
{
    int a;
    while (cin >> a)
        pv->push_back(a);
    return pv;
}

auto print_vecInt(shared_ptr<vector<int>> pv) -> std::ostream&
{
    for (auto i : *pv)
        cout << i << " ";
    return cout;
}

int main(int argc, char const *argv[])
{
    shared_ptr<vector<int>> pv = read_vecInt(new_vecInt());
    print_vecInt(pv) << endl;

    return 0;
}
