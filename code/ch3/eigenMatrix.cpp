#include <iostream>
using namespace std;

#include <ctime>

#include <Eigen/Core> //Eigen core
#include <Eigen/Dense> //Algebraic operations of dense matrices (inverses, eigen values, etc., )

using namespace Eigen;

#define MATRIX_SIZE 50


int main(int argc, char **argv) {

	Matrix<float, 2, 3> matrix_23;

	Vector3d v_3d;

	Matrix<float, 3, 1> vd_3d;
	Matrix3d matrix_33 = Matrix3d::Zero(); // initialized to zero

	Matrix<double, Dynamic, Dynamic> matrix_dynamic;

	MatrixXd matrix_x;

	matrix_23 << 1, 2, 3, 4, 5, 6;
	cout << "matrix 2x3 from 1 to 6: \n" << matrix_23 << endl;

	cout << "print matrix 2x3: " << endl;
	for (int i=0; i < 2; i++){
		for (int j = 0; j < 3; j++)
			cout << matrix_23(i, j) << "\t";
			cout << endl;
	}

	v_3d << 3, 2, 1;
	vd_3d << 4, 5, 6;

	Matrix<double, 2, 1> result = matrix_23.cast<double>() * v_3d;
	cout << "[1, 2, 3; 4, 5, 6] * [3, 2, 1]=" << result.transpose() << endl;

	Matrix<float, 2, 1> result2 = matrix_23 * vd_3d;
	cout << "[1, 2, 3; 4, 5, 6] * [4, 5, 6]=" << result.transpose() << endl;	

	//Matrix<double, 2, 3> result_wrong_dimension = matrix_23.cast<double>() * v_3d;

	
}