#include<iostream>
using namespace std;

//input 2 dimensions array
void inputArray(int **a, int row, int column) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			cout << "Nhap phan tu a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
			cout << endl;
		}
	}
}

//output 2 dimensions array
void outputArray(int **a, int row, int column) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			//cout << "Nhap phan tu a[" << i << "][" << j << "]";
			cout << a[i][j] << endl;
		}
	}
}

//delete 2 dimensions array
void deleteArray(int **a, int row) {
	for (int i = 0; i < row; i++) {
		delete []a[i];
	}
	delete []a;
}

//use 1D array to fake 2D array
void inputA(int *a, int &row, int &column) {
	for (int i = 0; i < row*column; i++) {
		cout << "a[" << i / column << "][" << i % column << "] = ";
		cin >> *(a + i);
		cout << endl;
	}
}

int main() {
	int **a = NULL, row, column;
	int i;
	int *b;
	cout << "Nhap so hang: ";
	cin >> row;
	cout << "Nhap so cot: ";
	cin >> column;
	//allocate memory for 2D array
	a = new int *[row];
	for (i = 0; i < row; i++) {
		a[i] = new int[column];
	}
	//allocate memory for fake 2D array
	b = new int[row];
	inputArray(a, row, column);
	//inputA(b, row, column);
	outputArray(a, row, column);
	deleteArray(a, row);
	cout << a[row - 1];

	system("pause");
	return 0;
}