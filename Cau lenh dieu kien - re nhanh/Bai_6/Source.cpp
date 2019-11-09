#include<iostream>
using namespace std;

bool checkAlphabet(char symbol) {
	//kiem tra ky tu co phai la chu cai
	int n = (int)symbol;
	if ((65 <= n && n <= 90) || (97 <= n && n <= 122)) {
		return true;
	}
	else {
		return false;
	}
}

char change(char symbol) {
	//doi ky tu hoa - thuong
	int n = (int)symbol;
	if (65 <= n && n <= 90) {
		return (char)(n + 32);
	}
	if (97 <= n && n <= 122) {
		return (char)(n - 32);
	}
}

int main() {
	char symbol;
	int n;
	cout << "Nhap vao mot chu cai: ";
	cin >> symbol; cout << endl;
	while (checkAlphabet(symbol) == false) {
		cout << "Khong hop le. Nhap lai: ";
		cin >> symbol; cout << endl;
	}
	n = (int)symbol;
	/*xu ly truc tiep
	if (65 <= n && n <= 90) {
		n += 32;
		cout << "Day la chu in hoa " << symbol << ". Doi sang chu in thuong : " << (char)n << endl;
	}
	else {
		n -= 32;
		cout << "Day la chu in thuong " << symbol << ". Doi sang chu hoa : " << (char)n << endl;
	}*/
	if (65 <= n && n <= 90) {
		cout << "Day la chu in hoa: " << symbol << ". Doi sang chu in thuong : " << change(symbol) << endl;
	}
	if (97 <= n && n <= 122) {
		cout << "Day la chu in thuong: " << symbol << ". Doi sang chu in hoa : " << change(symbol) << endl;
	}

	system("pause");
	return 0;
}