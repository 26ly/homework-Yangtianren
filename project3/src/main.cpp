#include<iostream>
#include<random>
#include<vector>
using namespace std;

int main()
{
	double t,vx = 2,vy = 3,tt = 0.01;
	cout << "请输入总时间t：";
	cin >> t;
	int h = t / tt;
	vector<double>x, y,z,k;

	random_device ps;
	mt19937 gen(ps());
	normal_distribution<double>dist(0, 0.1);
	random_device pb;
	mt19937 gen1(pb());
	normal_distribution<double>dis(0, 0.5);

	x.push_back(0);
	y.push_back(0);
	for (int i = 1; i < h + 1; i++)
	{
		x.push_back(x[i - 1] + (vx + dist(gen))*tt);
		y.push_back(y[i - 1] + (vy + dist(gen))*tt);
	}
	cout << "仅存在过程噪声:"<<endl;
	cout << "第0.00秒" << "\t" << "x:" << x[0] << "\t" << "y:" << y[0] << endl;
	for (int i = 1; i < h + 1; i++)
	{
		cout << "第" << i * tt << "秒" << "\t" << "x:" << x[i] << "\t" << "y:" << y[i] << endl;
	}
    cout << endl;

	z.push_back(0);
	k.push_back(0);
	for (int m = 1; m < h + 1; m++)
	{
		z.push_back(z[m - 1] + vx*tt);
		k.push_back(k[m - 1] + vy*tt);
	}
	cout << "仅存在观测噪声:" << endl;
	cout << "第0.00秒" << "\t" << "x:" << z[0] << "\t" << "y:" << k[0] << endl;
	for (int m = 1; m < h + 1; m++)
	{
		cout << "第" << m * tt << "秒" << "\t" << "x:" << z[m]+dis(gen1) << "\t" << "y:" << k[m]+dis(gen1) << endl;
	}
    cout << endl;

	cout << "两噪声均存在:" << endl;
	for (int m = 1; m < h + 1; m++)
	{
		cout << "第" << m * tt << "秒" << "\t" << "x:" << x[m] + dis(gen1) << "\t" << "y:" << y[m] + dis(gen1) << endl;
	}

	return 0;
}