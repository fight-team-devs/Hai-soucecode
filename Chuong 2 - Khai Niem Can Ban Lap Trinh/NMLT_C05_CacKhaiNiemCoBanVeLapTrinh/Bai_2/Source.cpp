#include<iostream>
using namespace std;

int main() {
	float a, b;
	float tong, hieu, tich, thuong;
	cout << "\n a = "; cin >> a;
	cout << "\n b = "; cin >> b;
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	thuong = a / b;
	cout << "\n Tong a + b = " << tong;
	cout << "\n Hieu a - b = " << hieu;
	cout << "\n Tich a * b = " << tich;
	cout << "\n Thuong a / b = " << thuong;
	system("PAUSE");
	return 0;
}

