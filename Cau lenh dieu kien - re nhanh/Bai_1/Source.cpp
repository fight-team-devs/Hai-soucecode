#include<iostream>
using namespace std;

int main() {
	int a, b, c, d;
	int max, min;
	cout << "Nhap vao 4 so nguyen: " << endl;
	cout << "a = "; cin >> a; cout << endl;
	cout << "b = "; cin >> b; cout << endl;
	cout << "c = "; cin >> c; cout << endl;
	cout << "d = "; cin >> d; cout << endl;

	max = a;
	if (max < b) {
		max = b;
	}
	if (max < c) {
		max = c;
	}
	if (max < d) {
		max = d;
	}
	cout << "So lon nhat la: " << max << endl;

	min = a;
	if (min > b) {
		min = b;
	}
	if (min > c) {
		min = c;
	}
	if (min > d) {
		min = d;
	}
	cout << "So nho nhat la: " << min << endl;

	system("pause");
	return 0;
}