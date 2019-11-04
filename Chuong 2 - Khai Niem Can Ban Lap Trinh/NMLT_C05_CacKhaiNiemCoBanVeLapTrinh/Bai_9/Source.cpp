#include<iostream>
using namespace std;
int main() {
	int soXe;
	cout << "Nhap vao so xe cua ban (khong qua 5 chu so): ";
	cin >> soXe;
	while (soXe < 0 || soXe > 100000) {
		cout << "Nhap lai so xe cua ban: ";
		cin >> soXe;
	}
	cout << endl;

	int cs5, cs4, cs3, cs2, cs1;
	cs5 = soXe / 10000;
	cs4 = (soXe % 10000) / 1000;
	cs3 = (soXe % 1000) / 100;
	cs2 = (soXe % 100) / 10;
	cs1 = soXe % 10;
	int nut;
	nut = (cs5 + cs4 + cs3 + cs2 + cs1) % 10;
	if (nut == 0) {
		nut += 10;
	}
	cout << "So xe cua ban duoc " << nut << " nut." << endl;

	system("PAUSE");
	return 0;
}