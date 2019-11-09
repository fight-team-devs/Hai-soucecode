#include<iostream>
#include<string>
using namespace std;

void checkNum(string m) { //kiem tra m co phai la so tu nhien duong
	int length = m.length(); //tim so cac chu so cua m
	for (int i = 0; i < length; i++) {
		while ('0' < m[i] && m[i] > '9') { //co the ep kieu m[i] sang int roi so sanh ma ASCII
			//phat hien ky tu khong phai la chu so
			cout << "Khong hop le. Nhap lai m: ";
			cin >> m; cout << endl;
		}
	}
}

void vltNum(string m) {
	/*so Valentine phai co 3 dac diem
	1. bat dau bang chu so '1'
	2. chi chua cac chu so '1' va '4'
	3. khong co nhieu hon 2 chu so '4' dung canh nhau*/
	checkNum(m); //kiem tra m co phai la so tu nhien duong
	int length = m.length();
	string little[7] = { "1", "11", "14", "111", "114", "141", "144" }; //so Valentine co 1-3 chu so
	if (length < 4) { //m co 1-3 chu so
		for (int a = 0; a <= 7; a++) {
			if (m == little[a]) {
				cout << "m la so Valentine.\n"; break;
			}
			if (a == 7 && m != little[a - 1]) {
				cout << "m khong phai la so Valentine.\n";
			}
		}
	}
	else { // m co 4 chu so tro len
		int flag = 1; 
		if (m[0] != '1') { // vi pham dieu kien 1
			flag = 0;
		}
		else { // thoa man dieu kien 1 
			for (int i = 1; i < length; i++) {
				if (m[i] != '1' && m[i] != '4') { // vi pham dieu kien 2
					flag = 0; break;
				}
				if (m[i - 1] == '4' && m[i] == '4' && m[i + 1] == '4') { // vi pham dieu kien 3
					flag = 0; break;
				}
			}
		}
		if (flag == 1) {
			cout << "m la so Valentine.\n";
		}
		else {
			cout << "m khong phai la so Valentine.\n";
		}
	}
}

int main() {
	string m;
	cout << "Nhap vao so tu nhien duong m: ";
	cin >> m;
	cout << endl;
	vltNum(m);

	system("pause");
	return 0;
}