#include <iostream>
#include <string>
using std::string;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;

struct Sales_data {
    string bookNo;
    unsigned int units_sale = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data total;
    double currPrice;
    if (cin >> total.bookNo >> total.units_sale >> currPrice) {
        total.revenue = total.units_sale * currPrice;
        Sales_data trans;
        double price;
        while (cin >> trans.bookNo >> trans.units_sale >> price) {
            trans.revenue = trans.units_sale * price;
            if (trans.bookNo == total.bookNo) {
                total.units_sale += trans.units_sale;
                total.revenue += trans.revenue;
            } else {
                cout << total.bookNo << " " << total.units_sale << " " << total.revenue;
                if (total.units_sale != 0) {
                    cout << " " << total.revenue/total.units_sale << endl;
                } else {
                    cout << " (no sales)" << endl;
                }
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sale << " " << total.revenue;
        if (total.units_sale != 0) {
            cout << " " << total.revenue/total.units_sale << endl;
        } else {
            cout << " (no sales)" << endl;
        }
    } else {
        cerr << "No data?!" << endl;
    }
    return 0;
}