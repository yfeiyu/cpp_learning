#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item currItem;
    if (std::cin  >> currItem) {
        Sales_item item;
        int cnt = 1;
        while (std::cin >> item) {
            if (item.isbn() == currItem.isbn())
                ++cnt;
            else {
                std::cout << currItem.isbn() << " occurs "
                          << cnt << " times" << std::endl;
                currItem = item;
                cnt = 1;
            }
        }
        std::cout << currItem.isbn() << " occurs "
                    << cnt << " times" << std::endl;
    }

    return 0;
}