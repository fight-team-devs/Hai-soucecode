#include<iostream>
using namespace std;

int main() {
	int namSinh, namNay, tuoi;
	cout << "\n Nhap nam hien tai: "; 
	cin >> namNay;
	cout << "\n Nhap nam sinh: ";
	cin >> namSinh;
	tuoi = namNay - namSinh;
	cout << "\n Tuoi cua nguoi do la " << tuoi << ". \n";
	system("PAUSE");
	return 0;
}