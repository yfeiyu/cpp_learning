#include <iostream>
#include <vector>
using std::vector; using std::cout; using std::endl;

int func(int a, int b);
using pFunc1 = decltype(func) *;
typedef decltype(func) *pFunc2;
typedef int (*pFunc3)(int a, int b);
using pFunc4 = int (*)(int a, int b);

int main()
{
    vector<pFunc1> vec1;
    vector<pFunc2> vec2;
    vector<pFunc3> vec3;
    vector<pFunc4> vec4;

    return 0;
}
