#include<iostream>
using namespace std;


int main() {
	float a, b, c; //nhap he so
	float n1, ng; //khoi a = 0, ng = x^2
	float d, ngh[2]; //khoi a =! 0, nghiem tam thoi ngh[i] = x^2
	float x[2]; //mang chua nghiem, nghiem
	int i;
	 
	cout << "Nhap vao cac he so: " << endl;
	cout << "a = "; cin >> a; cout << endl;
	cout << "b = "; cin >> b; cout << endl;
	cout << "c = "; cin >> c; cout << endl;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				//ba he so bang 0.
				cout << "Phuong trinh co vo so nghiem." << endl;
			}
			else {
				//a = 0, b = 0, c =! 0
				cout << "Phuong trinh vo nghiem." << endl;
			}
		}
		else {
			n1 = -c / b; //x^2 = n1
			if (n1 < 0) {
				cout << "Phuong trinh vo nghiem." << endl;
			}
			else {
				if (n1 == 0) {
					cout << "Phuong trinh co nghiem x = 0." << endl;
				}
				else {
					ng = sqrt(n1); //ng = x
					cout << "Phuong trinh co cac nghiem " << ng << ", " << -ng << endl;
				}
			}
		}
	}
	else {
		d = b * b - 4 * a * c;
		if (d < 0) {
			cout << "Phuong trinh vo nghiem." << endl;
		}
		d = sqrt(d);
		a *= 2;
		ngh[0] = (-b + d) / a;
		ngh[1] = (-b - d) / a;
		if (ngh[0] == 0 && ngh[1] == 0) {
			cout << "Phuong trinh co nghiem x = 0.";
		}
		else {
			cout << "Phuong trinh co cac nghiem: ";
			for (i = 0; i <= 1; i++) {
				if (ngh[i] >= 0) {
					x[i] = sqrt(ngh[i]);
					if (ngh[i] == 0) {
						cout << x[i] << ", ";
					}
					else {
						cout << x[i] << ", " << -x[i] << ", ";
					}
				}
			}
		}
	}
	cout << endl;

	system("pause");
	return 0;
}