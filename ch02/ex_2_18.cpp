#include <iostream>

int main()
{
    int i = 0, j = 5;
    int *p = &i;
    std::cout << p << " " << *p <<std::endl;
    p = &j;
    std::cout << p << " " << *p <<std::endl;
    *p = 10;
    std::cout << p << " " << *p <<std::endl;
    j = 20;
    std::cout << p << " " << *p <<std::endl;

    return 0;
}