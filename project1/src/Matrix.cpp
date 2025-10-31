#include<iostream>
#include"../include/Matrix.hpp"

matrix::matrix(int i, int j) :row(i), column(j), data(i, vector<double>(j, 0.0)){}

void matrix::set(){
    for (int x = 0; x < row; x++){
	    cout << "请输入矩阵第" << x+1 << "行的" << column << "个数据"<<endl;
	    for (int h = 0; h < column; h++){
		    cin >> data[x][h];
	    }
    }
}

void matrix::print(){
    for (int m = 0; m < row; m++){
	    for (int n = 0; n < column; n++){
		    cout << data[m][n] << "\t";
	    }
	    cout << endl;
    }
}

matrix matrix::add(matrix&m1,matrix&m2){
    matrix result_add(m1.row, m1.column);
    for (int m = 0; m < m1.row; m++){
        for (int n = 0; n < m1.column; n++)
            result_add.data[m][n] = m1.data[m][n] + m2.data[m][n];
    }
    return result_add;
}

matrix matrix::minus(matrix&m1,matrix&m2){
    matrix result_minus(m1.row, m1.column);
    for (int m = 0; m < m1.row; m++){
        for (int n = 0; n < m1.column; n++)
            result_minus.data[m][n] = m1.data[m][n] - m2.data[m][n];
    }
    return result_minus;
}