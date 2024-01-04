#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned int units_sale = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data total;
    double currPrice;
    if (std::cin >> total.bookNo >> total.units_sale >> currPrice) {
        total.revenue = total.units_sale * currPrice;
        Sales_data trans;
        double price;
        while (std::cin >> trans.bookNo >> trans.units_sale >> price) {
            trans.revenue = trans.units_sale * price;
            if (trans.bookNo == total.bookNo) {
                total.units_sale += trans.units_sale;
                total.revenue += trans.revenue;
            } else {
                std::cout << total.bookNo << " " << total.units_sale << " " << total.revenue;
                if (total.units_sale != 0) {
                    std::cout << " " << total.revenue/total.units_sale << std::endl;
                } else {
                    std::cout << " (no sales)" << std::endl;
                }
                total = trans;
            }
        }
        std::cout << total.bookNo << " " << total.units_sale << " " << total.revenue;
        if (total.units_sale != 0) {
            std::cout << " " << total.revenue/total.units_sale << std::endl;
        } else {
            std::cout << " (no sales)" << std::endl;
        }
    } else {
        std::cerr << "No data?!" << std::endl;
    }
    return 0;
}