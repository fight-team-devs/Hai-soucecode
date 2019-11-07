#include<iostream>
using namespace std;

void triangle(float a, float b, float c) {
	if ((a + b) > c && (b + c) > a && (c + a) > b) {
		cout << "a, b, c la do dai ba canh cua tam giac ";
	}
	else {
		cout << "a, b, c khong phai la do dai ba canh cua tam giac." << endl;
	}
}

void check(float a, float b, float c) {
	if ((a + b) > c && (b + c) > a && (c + a) > b) {
		a *= a;
		b *= b;
		c *= c;
		if (a == b || b == c || c == a) {
			//xet tam giac can
			if (a == b && b == c && c == a) {
				cout << "deu." << endl;
			}
			else if ((a + b) == c || (b + c) == a || (c + a) == b) {
				cout << "vuong can." << endl;
			}
			else {
				cout << "can." << endl;
			}
		}
		else {
			//khong can
			if ((a + b) == c || (b + c) == a || (c + a) == b) {
				cout << "vuong." << endl;
			}
			else {
				//khong can, vuong
				if ((a + b) < c || (b + c) < a || (c + a) < b) {
					cout << "tu." << endl;
				}
				else {
					cout << "nhon." << endl;
				}
			}
		}
		/*if ((a + b) < c || (b + c) < a || (c + a) < b) {
			cout << "tu." << endl;
		}*/
	}
}

int main() {
	float a, b, c, d;
	cout << "Nhap vao cac canh:" << endl;
	cout << "a = "; cin >> a; cout << endl;
	cout << "b = "; cin >> b; cout << endl;
	cout << "c = "; cin >> c; cout << endl;
	d = sqrt(c);
	//d giup de kiem tra truong hop tam giac vuong can
	triangle(a, b, d);
	check(a, b, d);

	system("pause");
	return 0;
}