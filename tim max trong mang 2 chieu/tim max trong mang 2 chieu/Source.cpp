#include<iostream>
#include<string>
using namespace std;

void taoMaTran(char **A, int length) {
	string str;
	int strl;
	for (int i = 0; i < length; i++) {
		//cin.ignore();
		cout << "Nhap vao hang thu " << i + 1 << ": ";
		//getline(cin, str);
		cin >> str;
		strl = str.length();
		if (strl > length) {
			str.erase(length);
		}
		for (int j = 0; j < length; j++) {
			A[i][j] = str[j];
		}
	}
}


bool kiemTraMaTran(char** A, int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (A[i][j] < '0' || A[i][j] > '9') {
				return false;
			}
		}
	}
	return true;
}
//void taoMaTran(int **A, int kichThuoc) {
//	for (int i = 0; i < kichThuoc; i++) {
//		for (int j = 0; j < kichThuoc; j++) {
//			cin >> A[i][j];
//		}
//		cout << endl;
//	}
//}

//bool checkNhiPhan(int **A, int kichThuoc) {
//	for (int i = 0; i < kichThuoc; i++) {
//		for (int j = 0; j < kichThuoc; j++) {
//			if (A[i][j] != 0 && A[i][j] != 1) {
//				return false;
//			}
//		}
//	}
//	return true;
//}

int main() {
	int length;
	char** A;
	cout << "Nhap kich thuoc ma tran: ";
	cin >> length;

	//cap phat bo nho cho ma tran A
	A = new char* [length];
	for (int i = 0; i < length; i++) {
		A[i] = new char[length];
	}

	taoMaTran(A, length);
	cout << "\n===========================================\n";

	bool checkMaTran = kiemTraMaTran(A, length);
	if (checkMaTran == false) {
		cout << "Khong hop le. Nhap lai ma tran: \n";
		taoMaTran(A, length);
	}

	//in ra ma tran A
	cout << "A = \n";
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			cout << "\t" << A[i][j];
		}
		cout << endl;
	}
	cout << "\n===========================================\n";
	

	system("pause");
	return 0;
}