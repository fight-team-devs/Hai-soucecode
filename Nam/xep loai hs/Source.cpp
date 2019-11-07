#include<iostream>
using namespace std;

int main() {
	float a;
	cout << "Nhap vao diem so cua hoc sinh: ";
	cin >> a; 
	cout << endl;

	while (a < 0 || a > 10) {
		cout << "Khong hop le. Nhap lai diem: ";
		cin >> a;
		cout << endl;
	}
	cout << "Xep loai ";
	if (a >= 9) {
		cout << "xuat sac.";
	}
	else {
		if (a >= 8) {
			cout << "gioi.";
		}
		else {
			if (a >= 7) {
				cout << "kha.";
			}
			else {
				if (a >= 6) {
					cout << "TB kha.";
				}
				else {
					if (a >= 5) {
						cout << "TB.";
					}
					else {
						cout << "yeu.";
					}
				}
			}
		}
	}
	cout << endl;

	system("pause");
	return 0;
}