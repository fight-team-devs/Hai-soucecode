#include<iostream>
using namespace std;
float main() {
	float r;
	float p, s;
	float const pi = 3.14;
	cout << "Nhap ban kinh duong tron r = "; cin >> r; cout << endl;
	p = 2 * pi * r;
	s = pi * r * r;
	cout << "Chu vi hinh tron la p = " << p << endl;
	cout << "Dien tich hinh tron la s = " << s << endl;

	system("PAUSE");
	return 0;
}