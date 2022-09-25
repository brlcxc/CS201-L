#include <iostream>
#include <vector>
#include "checkingmodule.h"

using namespace std;

void main() {
	vector<vector<int>> matrix;
	vector<vector<int>> matrixOne;
	vector<vector<int>> matrixTwo;
	char playAgain;
	int numColumns, numRows;

	do {
		for (int i = 1; i <= 2; ++i) {
			cout << "Enter the number of rows in this matrix >>> ";
			cin >> numRows;
			cout << endl << "Enter the number of columns in this matrix >>> ";
			cin >> numColumns;
			ResizeMatrix(matrix, numColumns, numRows);
			cout << endl << "Please enter the values in this matrix, you can enter each row at once, each cell or all of them seperated by spaces." << endl;
			AddElements(matrix);
			cout << "You entered the grid g" << i << " as" << endl;
			OutputMatrix(matrix);
			if (i == 1)
				matrixOne = matrix;
			else
				matrixTwo = matrix;
		}

		if ((matrixOne.size() == matrixTwo.size()) && (matrixOne.at(0).size() == matrixTwo.at(0).size()))
			MatrixAddition(matrixOne, matrixTwo);
		else
			cout << "Cannont add 2 grids of this size together, the # of rows and columns must be the same" << endl;
		if (matrixOne.at(0).size() == matrixTwo.size())
			MatrixMultiplication(matrixOne, matrixTwo);
		else
			cout << "Cannont multiply 2 grids of this size together, the # of columns in g1 and the number of rows in g2 must be equal" << endl;

		cout << "Press Q to quit, any other key to do another grid" << endl;
		cin >> playAgain;

	} while (tolower(playAgain) != 'q');
}