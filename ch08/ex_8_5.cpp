#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using std::istream; using std::ostream; using std::cout; using std::cin; using std::endl; using std::cerr;
using std::ifstream; using std::ofstream; using std::fstream;
using std::vector;
using std::string;

void readFile(const string &filename, vector<string> &vec)
{
    ifstream input(filename);
    if (input) {
        string tmp;
        while(input >> tmp)
            vec.push_back(tmp);
    } else {
        cerr << "couldn't open: " + filename;
    }
}

int main(int argc, char const *argv[])
{
    vector<string> vec;
    readFile("test.txt", vec);
    for (auto line : vec)
        cout << line << endl;
    return 0;
}