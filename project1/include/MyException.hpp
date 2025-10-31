#ifndef MYEXCEPTION_HPP
#define MYEXCEPTION_HPP

#include<stdexcept>
#include<string>
using namespace std;

class MyException:public runtime_error{
public:
    MyException(const string& message):runtime_error(message){}
};

#endif