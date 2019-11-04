#include<iostream>
using namespace std;
int main() {
	int so1, so2;
	int min, max;
	cout << "Nhap vao 2 so:" << endl;
	cout << "so 1 = "; cin >> so1; cout << endl;
	cout << "so 2 = "; cin >> so2; cout << endl;
	so1 > so2 ? max = so1 : max = so2;

	if (max == so1) {
		min = so2;
	}
	else {
		min = so1;
	}
	cout << "max = " << max <<endl; 
	cout << "min = " << min <<endl;

	system("PAUSE");
	return 0;
}