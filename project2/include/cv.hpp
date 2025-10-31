#ifndef CV_HPP
#define CV_HPP

#include<opencv2/opencv.hpp>
using namespace cv;


class Demo
{
public:
	void colorspace(Mat& image);
	void read(Mat& image);
	void cutgray(Mat& image, int thresh, int maxval);
};

#endif