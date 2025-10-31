#include<iostream>
#include"../include/Matrix.hpp"
#include"../include/MyException.hpp"

int main()
{
	try {
		int a, b;
		cout << "请输入你需要的矩阵的行数" << endl;
		cin >> a;
		cout << "请输入你需要的矩阵的列数" << endl;
		cin >> b;
		if (a <= 0 || b <= 0)
		{
			throw MyException("矩阵的维度不符合规定，必须为正数");
		}
		matrix I(a, b);
		matrix II(a, b);

		cout << "现在请你自定义第一个矩阵" << endl;
		I.set();
		cout << "现在请你自定义第二个矩阵" << endl;
		II.set();

		matrix result1 = matrix::add(I, II);
		matrix result2 = matrix::minus(I, II);
		cout << "加法结果：" << endl;
		result1.print();
		cout << "减法结果：" << endl;
		result2.print();
	}
	catch (const MyException& e) {
		cerr << "矩阵错误" << endl;
		cerr << "错误信息：" << e.what() << endl;
		return -1;
	}

	return 0;
}