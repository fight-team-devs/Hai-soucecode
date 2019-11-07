#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	float d, x, x1, x2;
	cout << "Giai phuong trinh bac 2: ax^2 + bx + c = 0:" << endl;
	cout << "Nhap cac he so: " << endl;
	cout << "a = "; cin >> a; cout << endl;
	cout << "b = "; cin >> b; cout << endl;
	cout << "c = "; cin >> c; cout << endl;
	while (a == 0) {
		cout << "Day khong phai la phuong trinh bac 2. Nhap lai:" << endl;
		cout << "a = "; cin >> a; cout << endl;
		cout << "b = "; cin >> b; cout << endl;
		cout << "c = "; cin >> c; cout << endl;
	}
	d = b * b - 4 * a * c;
	if (d < 0) {
		cout << "Phuong trinh vo nghiem.";
	}
	else {
		if (d == 0) {
			x = -b / (2 * a);
			cout << "Phuong trinh co nghiem x = " << x << endl;
		}
		else {
			x1 = (-b - sqrt(d)) / (2 * a);
			x2 = (-b + sqrt(d)) / (2 * a);
			cout << "Phuong trinh co 2 nghiem: " << endl;
			cout << "x1 = " << x1 << endl;
			cout << "x2 = " << x2 << endl;
		}
	}

	system("pause");
	return 0;
}