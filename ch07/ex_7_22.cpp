#include <iostream>
#include <string>
using std::string;
using std::cin; using std::cout; using std::endl;
using std::istream; using std::ostream;


class Person
{
friend istream &read(istream &is, Person &person);
friend ostream &print(ostream &os, const Person &person);
public:
    Person() = default;
    Person(const string &s): name(s) { }
    Person(const string &s, const string &s2): name(s), address(s2) { }
    explicit Person(istream &is) { read(is, *this); }

    string getName() const { return name; }
    string getAddr() const { return address; }
private:
    string name;
    string address;
};

istream &read(istream &is, Person &person);
ostream &print(ostream &os, const Person &person);

istream &read(istream &is, Person &person)
{
    is >> person.name >> person.address;
    return is;
}

ostream &print(ostream &os, const Person &person)
{
    os << person.name << " " << person.address;
    return os;
}

