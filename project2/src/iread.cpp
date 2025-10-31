#include"../include/iread.hpp"
#include<opencv2/opencv.hpp>
#include"../include/MyException.hpp"
using namespace cv;
using namespace std;

Mat iread(const string& imagePath) {
	Mat image = imread(imagePath, IMREAD_COLOR);
	if (image.empty()) {
		throw MyException("文件不存在或者格式不支持");
	}
	return image;
}