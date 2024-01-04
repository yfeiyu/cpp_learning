#include <iostream>
#include <string>
using std::cin; using std::cout; using std::endl;
using std::string;
using std::istream; using std::ostream;

class Person
{
friend istream &read(istream &is, Person &person);
friend ostream &print(ostream &os, const Person &person);

public:
    Person() = default;
    Person(string sname, string saddr) : name(sname), address(saddr) { }
    Person(istream &is) { read(is, *this); }

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


int main()
{

    return 0;
}