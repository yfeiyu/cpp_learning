#include <fstream>
#include <iostream>
#include "../ch07/ex7_26.h"

using std::ifstream; using std::ofstream;
using std::cin; using std::cout; using std::cerr; using std::endl;

int main(int argc, char const *argv[])
{
    ifstream input(argv[1]);
    ofstream output(argv[2], ofstream::app);

    Sales_data total;
    if (read(input, total)) {
        Sales_data trans;
        while (read(input, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(output, total) << endl;
                total = trans;
            }
        }
        print(output, total) << endl;
    } else {
        cerr << "NO data ?!" << endl;
    }

    return 0;
}
