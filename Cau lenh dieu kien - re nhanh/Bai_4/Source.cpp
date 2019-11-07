#include<iostream>
using namespace std;

int day(int m, int y) {
	int m31[] = { 1, 3, 5, 7, 8, 10, 12 };
	int m30[] = { 4, 6, 9, 11 };
	for (int i = 0; i < 7; i++) {
		if (m == m31[i]) {
			return 31;
		}
		if (m == m30[i]) {
			return 30;
		}
		if (m == 2) {
			return (y % 4 == 0) ? 29 : 28;
		}
	}
}
void read(int m, int y) {
	cout << "Thang " << m << " / " << y << " co " << day(m, y) << " ngay." << endl;
}
int main() {
	int month, year;
	cout << "Nhap vao: " << endl; 
	cout << "Thang: "; cin >> month; cout << endl;
	while (month < 0 || month > 12) {
		cout << "Khong hop le. Nhap lai thang: ";
		cin >> month; cout << endl;
	}
	cout << "Nam: "; cin >> year; cout << endl;
	while (year < 0) {
		cout << "Khong hop le. Nhap lai nam: ";
		cin >> year; cout << endl;
	}
	read(month, year);

	system("pause");
	return 0;
}