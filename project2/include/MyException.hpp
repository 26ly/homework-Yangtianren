#ifndef MYEXCEPTION_HPP
#define MYEXCEPTION_HPP

#include <stdexcept>
#include <string>
using namespace std;

class MyException :public runtime_error {
public:
	explicit MyException(const string& reason)
		:runtime_error("图像加载失败" + reason)
		 {
	}

private:
	string imagePath_;
};

#endif