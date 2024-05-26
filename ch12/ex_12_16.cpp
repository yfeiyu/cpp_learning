#include <iostream>
#include <vector>
#include <string>
#include <memory>
using std::string;
using std::vector;
using std::cin; using std::cout; using std::endl;
using std::unique_ptr;

int main(int argc, char const *argv[])
{
    unique_ptr<string> p1(new string("HelloKitty"));

    unique_ptr<string> ptmp;
    ptmp = p1;
    unique_ptr<string> ptmp2(p1);
    unique_ptr<string> p2(p1.release());

    unique_ptr<string> p3(new string("Jack"));
    p2.reset(p3.release());

    auto p = p2.release();
    delete p;

    return 0;
}
