#include <iostream>
#include <vector>
using namespace std;

void ResizeMatrix(vector<vector<int>>& matrix, int numColumns, int numRows) {
	matrix.resize(numRows);
	for (int i = 0; i < numRows; ++i) {
		matrix.at(i).resize(numColumns);
	}
}

void AddElements(vector<vector<int>>& matrix) {
	int userInput;
	const int ROWSIZE = matrix.size();
	const int COLUMNSIZE = matrix.at(0).size();

	for (int i = 0; i < ROWSIZE; ++i) {
		for (int j = 0; j < COLUMNSIZE; ++j) {
			cin >> userInput;
			matrix.at(i).at(j) = userInput;
		}
	}
}

void OutputMatrix(vector<vector<int>>& matrix) {
	const int ROWSIZE = matrix.size();
	const int COLUMNSIZE = matrix.at(0).size();

	for (int i = 0; i < ROWSIZE; ++i) {
		for (int j = 0; j < COLUMNSIZE; ++j) {
			cout << matrix.at(i).at(j) << " ";
		}
		cout << endl;
	}
}

void MatrixAddition(vector<vector<int>> matrixOne, vector<vector<int>> matrixTwo) {
	const int ROWSIZE = matrixOne.size();
	const int COLUMNSIZE = matrixOne.at(0).size();

	cout << "g1 + g2 is" << endl;

	for (int i = 0; i < ROWSIZE; ++i) {
		for (int j = 0; j < COLUMNSIZE; ++j) {
			cout << matrixOne.at(i).at(j) + matrixTwo.at(i).at(j) << " ";
		}
		cout << endl;
	}
}

void MatrixMultiplication(vector<vector<int>> matrixOne, vector<vector<int>> matrixTwo) {
	const int ROWSIZE = matrixOne.size();
	const int COLUMNSIZE = matrixOne.at(0).size();
	int sum;

	cout << "g1 * g2 is" << endl;

	for (int z = 0; z < ROWSIZE; ++z) {//2
		for (int i = 0; i < ROWSIZE; ++i) {//2
			sum = 0;
			for (int j = 0; j < COLUMNSIZE; ++j) {//(3)
				sum += matrixOne.at(z).at(j) * matrixTwo.at(j).at(i);
			}
			cout << sum << " ";
		}
		cout << endl;
	}
}