#include <iostream>
#include <fstream>
#include <string>
using std::istream; using std::ostream; using std::cout; using std::cin; using std::endl; using std::cerr;
using std::ifstream; using std::ofstream; using std::fstream;
using std::string;

void process (istream &is)
{

}

int main(int argc, char const *argv[])
{
    cin.tie(&cout);
    ostream *old_tie = cin.tie(nullptr);
    cin.tie(&cerr);
    cin.tie(old_tie);

    for (auto p = argv + 1; p != argv + argc; ++p) {
        ifstream input(*p);
        if (input) {
            process(input);
        } else {
            cerr << "couldn't open: " + string(*p);
        }
    }

    return 0;
}