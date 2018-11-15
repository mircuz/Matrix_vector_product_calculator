//============================================================================
// Name        : matrix_vector_product_calcolator.cpp
// Author      : Mirco Meazzo
// Version     :
// Copyright   : GNU GPL v3
// Description : Simple calculator to perform the product between matrix & vector
//============================================================================

#include <iostream>
using namespace std;

int rows, cols;

void mat_vect_mult( double** mat, double* vect) {
	double x[rows];

	for ( int i = 0; i < rows; ++i) {
		x[i] = 0;
				for ( int j = 0; j < cols; j++) {

					x[i] = x[i] + mat[i][j] * vect[j];
				}
			}

			for ( int i = 0; i < rows; ++i) {
				cout << x[i] << endl;
			}
}

int main() {

	cout << "Insert the matrix dimension \nrows:" << flush;
	cin >> rows;
	cout << "columns:" << flush;
	cin >> cols;
	double A[rows][cols], b[cols];

	// Data Input

	cout << "Insert the matrix values" << endl;

	for ( int i = 0; i < rows; ++i) {
		for ( int j = 0; j < cols; ++j) {

			cout << "(" << i+1 << "," << j+1 << "):" << flush;
			cin >> A[i][j];
		}
	}

	cout << "Insert the vector values" << endl;

	for ( int j = 0; j < cols; j++) {

		cout << "(" << j+1 << "): " << flush;
		cin >> b[j];
	}


	// Matrix vector multiplication

	double *catcher[rows];
	for ( int i = 0; i < rows; ++i) {
		catcher[i] = A[i];
	}
	mat_vect_mult( catcher, b );

	return 0;
}
