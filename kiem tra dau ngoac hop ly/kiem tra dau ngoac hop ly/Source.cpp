//kiem tra chuoi dau ngoac nhap vao co hop le khong
#include<iostream>
#include<string>
using namespace std; 

//ASCII cua '(' la 40, cua ')' la 41

void nhapXau(string &s) {
	getline(cin, s);
}
//kiem tra xau nhap vao co chua ky tu khac dau ngoac hay khong
bool kiemTraDauNgoac(string s) {
	int length = s.length();
	for (int i = 0; i < length; i++) {
		if (s[i] < 40 || s[i] > 41) {
			return false;
		}
	}
	return true;
}

//kiem tra xau dau ngoac co hop le hay khong
bool kiemTraHopLe(string s) {
	int length = s.length();
	int count = 0;
	for (int i = 0; i < length; i++) {
		if (s[i] == 40) {
			count++;
		}
		if (s[i] == 41) {
			count--;
		}
		if (count < 0) {
			return false;
		}
	}
	if (count != 0) {
		return false;
	}
	return true;
}

int main() {
	string s;
	bool checkDauNgoac, checkHopLe;

	cout << "Nhap vao xau dau ngoac: ";
	nhapXau(s);
	checkDauNgoac = kiemTraDauNgoac(s);
	if (checkDauNgoac == false) {
		cout << "Chuoi nhap vao khong hop le. Nhap lai: ";
		nhapXau(s);
	}

	kiemTraHopLe(s);
	if (checkHopLe == false) {
		cout << "Xau dau ngoac da nhap khong hop le!\n";
	}
	else {
		cout << "Xau dau ngoac da nhap hop le.\n";
	}

	system("pause");
	return 0;
}