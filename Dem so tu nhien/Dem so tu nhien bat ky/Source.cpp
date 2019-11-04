#include<iostream>
#include<string>
using namespace std;

int main() {
	int n, chuc, dv;
	string A[11] = { " khong", " mot1", " hai", " ba", " bon", " nam", " sau", " bay", " tam", " chin", " muoi1" };
	//A: doc thong thuong
	string B[6] = { " ", " mot", " ", " ", " ", " lam" };
	//B: doc hang don vi dac biet
	string C[5] = {" muoi", " tram", " nghin", " trieu", " ty"}
	//C: doc lop
	cout << "Nhap so tu nhien n (0 <= n <= 99) = "; cin >> n; cout << endl;
	if (n < 0 || n > 99) {
		cout << "Nhap lai n = "; cin >> n; cout << endl;
	}
	chuc = n / 10; dv = n % 10;
	cout << "So do doc la: ";
	if (chuc == 0) {
		switch (dv) {
		case 0: cout << A[0] << endl; break;
		case 1: cout << A[1] << endl; break;
		case 2: cout << A[2] << endl; break;
		case 3: cout << A[3] << endl; break;
		case 4: cout << A[4] << endl; break;
		case 5: cout << A[5] << endl; break;
		case 6: cout << A[6] << endl; break;
		case 7: cout << A[7] << endl; break;
		case 8: cout << A[8] << endl; break;
		case 9: cout << A[9] << endl; break;
		}
	}
	else {
		if (chuc == 1) {
			switch (dv) {
			case 0: cout << A[10] << endl; break;
			case 1: cout << A[10] << A[1] << endl; break;
			case 2: cout << A[10] << A[2] << endl; break;
			case 3: cout << A[10] << A[3] << endl; break;
			case 4: cout << A[10] << A[4] << endl; break;
			case 5: cout << A[10] << B[5] << endl; break;
			case 6: cout << A[10] << A[6] << endl; break;
			case 7: cout << A[10] << A[7] << endl; break;
			case 8: cout << A[10] << A[8] << endl; break;
			case 9: cout << A[10] << A[9] << endl; break;
			}
		}
		else {
			for (int i = chuc; i <= 9; i++) {
				switch (dv) {
				case 0: cout << A[i] << C[0]; break;
				case 1: cout << A[i] << C[0] << B[1]; break;
				case 2: cout << A[i] << C[0] << A[2]; break;
				case 3: cout << A[i] << C[0] << A[3]; break;
				case 4: cout << A[i] << C[0] << A[4]; break;
				case 5: cout << A[i] << C[0] << B[5]; break;
				case 6: cout << A[i] << C[0] << A[6]; break;
				case 7: cout << A[i] << C[0] << A[7]; break;
				case 8: cout << A[i] << C[0] << A[8]; break;
				case 9: cout << A[i] << C[0] << A[9]; break;
				}
				break;
			}
		}
	}
	cout << endl;

	system("PAUSE");
	return 0;
}