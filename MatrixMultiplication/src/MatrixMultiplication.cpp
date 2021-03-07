//============================================================================
// Name        : MatrixMultiplication.cpp
// Author      : Robin Holm
// Description : Task 7. App for creating a matrix by multiplying to other input
//				matrices according to a formula.
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

const int MAXDIM = 5;
typedef double Matrix[MAXDIM][MAXDIM];

void multMatrix(const Matrix A, const Matrix B, Matrix C, int m, int n, int p);
void getInput(int &row, int &col);
void readMatrix(Matrix M, int row, int col);
void printMatrix(const Matrix M, int row, int col);

int main() {

	char answer;
	do {

		int rowA, colA, rowB, colB;
		Matrix A, B, C;

		cout << "Enter dimension of first matrix with space between: ";
		getInput(rowA, colA);
		readMatrix(A, rowA, colA);
		cout << "Enter dimension of second matrix with space between: ";
		getInput(rowB, colB);

		while (colA != rowB) {
			cout << "The number of columns in matrix a" <<
					" must equal the number of rows in matrix b" << endl;
			cout << "Enter dimension of second matrix with space between: ";
			getInput(rowB, colB);
		}

		readMatrix(B, rowB, colB);
		multMatrix(A, B, C, rowA, colB, colA);

		cout << "One more time (y/n)? ";
		cin >> answer;
		cin.clear();
		cin.ignore();

	} while (answer == 'y');

	return 0;

}

void multMatrix(const Matrix A, const Matrix B, Matrix C, int m, int n, int p) {

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < p; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	cout << "Matrix C: " << endl;
	printMatrix(C, m, n);

}

void getInput(int &row, int &col) {

	char input[100] = {'\0'};
	cin.getline(input, 100, '\n');
	string a, b;
	int i = 0;
	while (input[i] != ' '){
	if (isdigit(input[i]) == true) a += input[i];
	i++;
	}
	while (input[i] != '\0') {
	if (isdigit(input[i]) == true) b += input[i];
	i++;
	}
	row = stoi(a);
	col = stoi(b);

}

void readMatrix(Matrix M, int row, int col) {

	cout << "Enter values of Matrix one cell at a time (" << row * col << " elements):" << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> M[i][j];
		}
	}
	cin.clear();
	cin.ignore();
	printMatrix(M, row, col);

}

void printMatrix(const Matrix M, int row, int col) {

	for(int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << " " << M[i][j] << " ";
		}
		cout << "\n";
	}

}
