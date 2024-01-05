#include <iostream>
#include <string>
using std::string;
using std::cin; using std::cout; using std::endl;
using std::istream; using std::ostream;

class Sales_data {
friend istream &read(istream &is, Sales_data &data);
public:
    Sales_data(string s, unsigned cnt, double price) :
            bookNo(s), units_sold(cnt), revenue(cnt*price) { cout << "Sales_data(string s, unsigned cnt, double price)" << endl; }
    Sales_data() : Sales_data("", 0, 0) { cout << "Sales_data()" << endl; }
    Sales_data(string s) : Sales_data(s, 0, 0) { cout << "Sales_data(string s)" << endl; }
    Sales_data(istream &is) : Sales_data()
                                    { cout << "Sales_data(istream &is)" << endl;
                                        read(is, *this); };
private:
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0;
};

istream &read(istream &is, Sales_data &data)
{
    double price = 0;
    is >> data.bookNo >> data.units_sold >> price;
    data.revenue = data.units_sold * price;
    return is;
}

int main(int argc, char const *argv[])
{
    cout << "1: " << endl;
    cout << "----------------" << endl;
    Sales_data data1;

    cout << "2: " << endl;
    cout << "----------------" << endl;
    Sales_data data2("IcN002");

    cout << "3: " << endl;
    cout << "----------------" << endl;
    Sales_data data3("IcN003", 3, 42.6);

    cout << "4: " << endl;
    cout << "----------------" << endl;
    Sales_data data4(cin);
    return 0;
}
