#include<iostream>
using namespace std;

bool check(int a, int b, int c) {
	if (a + b > c && b + c > a && c + a > b) {
		return true;
	}
	return false;
}
int check1(float a, float b, float c) {
	int a1 = (int)((a - 0.0001)*(a - 0.0001)) + 1;
	int b1 = (int)((b - 0.0001)*(b - 0.0001)) + 1;
	int c1 = (int)((c - 0.0001)*(c - 0.0001)) + 1;
	if (a1+ b1 == c1) {
		return 0;
	}
	else if (a1 + b1 > c1) {
		return 1;
	}
	else {
		return 2;
	}
	
}
void checkAttribute(float a, float b, float c) {
	if (check(a, b, c)) {
		//check tam giac can
		if (a == b || b == c || c == a) {
			if (a == b && b == c && c == a) {
				cout << " La tam giac deu \n";
			}
			else if (check1(a, b, c)==0 || check1(b, c, a)==0 || check1(c, a, b)==0) {
				cout << " La tam giac vuong can \n";
			}
			else {
				cout << " La tam giac can \n";
			}
		}
		//check tam giac khong can
		else {
			if (check1(a, b, c) == 0 || check1(b, c, a) == 0 || check1(c, a, b) == 0) {
				cout << " La tam giac vuong \n";
			}
			else if (check1(a, b, c) == 1 || check1(b, c, a) == 1 || check1(c, a, b) == 1) {
				cout << " La tam giac tu \n";
			}
			else {
				cout << " La tam giac nhon \n";
			}
		}
	}
	else {
		cout << "Khong la ba canh cua mot tam giac \n";
	}
}
int main() {
	float a, b, c;
	cout << "Nhap vao binh phuong cac canh:" << endl;
	cout << "a2 = "; cin >> a; cout << endl;
	cout << "b2= "; cin >> b; cout << endl;
	cout << "c2 = "; cin >> c; cout << endl;
	//Nhap binh phuong cac canh
	checkAttribute(sqrt(a), sqrt(b), sqrt(c));

	system("pause");
	return 0;
}