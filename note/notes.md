Exercise 7.49

```
(b) Sales_data &combine(Sales_data&); // [Error] no matching function for call to 'Sales_data::combine(std::string&)' (`std::string&` can not convert to `Sales_data` type.) 
```
Some detailed explanation about problem (b) :It's wrong. Because combine’s parameter is a non-const reference , we can't pass a temporary to that parameter. If combine’s parameter is a reference to const , we can pass a temporary to that parameter. Like this :Sales_data &combine(const Sales_data&);  Here we call the Sales_data combine member function with a string argument. This call is perfectly legal; the compiler automatically creates a Sales_data object from the given string. That newly generated (temporary) Sales_data is passed to combine.(Also you can read C++ Primer Page 295(English Edition))