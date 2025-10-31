#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>
#include <iostream>
using namespace std;


class matrix {
private: 
	int row,column;
	vector<vector<double>> data;

public:
    matrix(int i, int j);
    void set();
    static matrix add(matrix& m1,matrix& m2);
    static matrix minus(matrix& m1, matrix& m2);
    void print();
};

#endif