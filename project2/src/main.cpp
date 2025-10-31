#include<iostream>
#include"../include/cv.hpp"
#include"../include/MyException.hpp"
#include"../include/iread.hpp"
#include<opencv2/opencv.hpp>
#include<string>

using namespace std;
using namespace cv;

int main()
{
	string imagePath = "D:/Robomaster/具身智能方向考核题/题目2图片/hero.png";

	try {
		Mat color = iread(imagePath);
		Demo pb;
		pb.colorspace(color);
		pb.cutgray(color, 150, 255);
		pb.read(color);


		waitKey(0);
		destroyAllWindows();
	}

	catch (const MyException& e) {
		cerr << "图像加载异常" << endl;
		cerr << "错误信息：" << e.what() << endl;
		return -1;
	}

	return 0;
}