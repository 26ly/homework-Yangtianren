#include"../include/cv.hpp"
#include<iostream>
using namespace std;

void Demo::colorspace(Mat& image)  //图像色彩变化显示
{
	Mat gray, hsv, Blur;
	cvtColor(image, hsv, COLOR_BGR2HSV);
	cvtColor(image, gray, COLOR_BGR2GRAY);
	blur(image, Blur, Size(image.rows, image.cols));
	namedWindow("原图", WINDOW_NORMAL);
	namedWindow("hsv", WINDOW_NORMAL);
	namedWindow("gray", WINDOW_NORMAL);
	namedWindow("模糊处理", WINDOW_NORMAL);
	resizeWindow("原图", 800, 600);
	resizeWindow("hsv", 800, 600);
	resizeWindow("gray", 800, 600);
	resizeWindow("模糊处理", 800, 600);
	imshow("原图", image);
	imshow("hsv", hsv);
	imshow("gray", gray);
	imshow("模糊处理", Blur);
}

void Demo::read(Mat& image)
{
	cout << "通道数：" << image.channels() << endl;
	cout << "图像的宽度：" << image.cols << "\t" << "图像的高度" << image.rows << endl;
	//cout << image << endl;
}

void Demo::cutgray(Mat& image, int thresh, int maxval) //按照亮度分割
{
	Mat gray1;
	cvtColor(image, gray1, COLOR_BGR2GRAY);
	Mat binary;
	threshold(gray1, binary, thresh, maxval, THRESH_BINARY);
	namedWindow("binary", WINDOW_FREERATIO);
	resizeWindow("binary", 800, 600);
	imshow("binary", binary);
}