#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main() {
	char tenSP[100];
	int soLuong, donGia;
	int tien, thueGTGT;

	cout << "Nhap ten san pham: " << endl;
	fflush(stdin);
	gets_s(tenSP);
	cout << "Nhap so luong san pham: " << endl;
	cin >> soLuong;
	cout << "Nhap don gia san pham: " << endl;
	cin >> donGia;
	tien = soLuong * donGia;
	thueGTGT = 0.1 * tien;
	cout << "So tien phai tra la: " << tien << endl;
	cout << "Thue GTGT phai tra la: " << thueGTGT << endl;
	
	system("PAUSE");
	return 0;
}