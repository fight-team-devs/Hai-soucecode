#include<iostream>
#include<string>
using namespace std;

void nhapTen(string &s) {
	//cin.ignore();
	getline(cin, s);
}

//ten hop le chi chua cac chu cai thuong hoac chu in hoa
bool kiemTraTen(string s) {
	int length = s.length();
	for (int i = 0; i < length; i++) {
		if (s[i] != ' ' && (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z')) {
			return false;
		}
	}
	return true;
}

//sau khi thuc hien kiem tra, chuoi ten chi con cac chu cai
void chuanHoaTen(string& s) {
	int length = s.length();

	//xoa khoang trang o dau dong
	while (s[0] == ' ') {
		s.erase(0, 1);
		length--;
	}

	for (int i = 0; i < length - 1; i++) {
		//viet hoa chu cai dau
		if (i == 0) {
			if (s[0] >= 'a') {
				s[0] -= 32;
			}
		}
		//cat khoang trang
		if (s[i] == ' ' && s[i + 1] == ' ') {
			s.erase(i, 1);
			length -= 1;
			i--;
			continue;
		}
		//viet hoa chu cai dau moi chu
		if (s[i] == ' ' && s[i + 1] >= 'a') {
			s[i + 1] -= 32;
		}
		//viet thuong chu cai sau chu cai dau
		if (s[i] != ' ' && s[i + 1] <= 'Z' && s[i + 1] != ' ') {
			s[i + 1] += 32;
		}
	}
}

int main() {
	string s;
	cout << "Nhap ho ten: ";
	nhapTen(s);

	bool checkTen = kiemTraTen(s);
	if (checkTen == false) {
		cout << "Chi duoc nhap chu cai va dau cach. Nhap lai: ";
		nhapTen(s);
	}

	chuanHoaTen(s);

	cout << "Ten sau khi chuan hoa la: " << s << endl;

	system("pause");
	return 0;
}