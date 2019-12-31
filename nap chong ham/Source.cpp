//tinh da hinh
//nap chong ham

#include<iostream>
using namespace std;
#include<string>

class Caculator {
public:
	Caculator() {

	}
	int sum(int a, int b) {
		return a + b;
	}

	float sum(int a, float b) {
		return a + b;
	}

	float sum(float a, float b) {
		return a + b;
	}

	string sum(string a, string b) {
		return a + b;
	}

	int sum(int *a, size_t size) {
		int sum = 0;
		for (int i = 0; i < size; i++) {
			sum += a[i];
		}
		return sum;
	}
};

int main() {
	Caculator calc;
	int *A = new int[4];
	cout << "Nhap mang A: \n";
	for (int i = 0; i < 4; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
		cout << endl;
	}

	cout << "Tong hai so nguyen: " << calc.sum(1, 2) << endl;
	cout << "Tong mot so nguyen va mot so thuc: " << calc.sum(1, 2.5f) << endl;
	cout << "Tong hai so thuc: " << calc.sum(1.5f, 2.5f) << endl;
	cout << "Tong cac so nguyen trong mot mang: " << calc.sum(A, 4) << endl;

	system("pause");
	return 0;
}