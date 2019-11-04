#include<iostream>
using namespace std;

int main() {
	int toan, ly, hoa;
	float hsToan, hsLy, hsHoa;
	float diemTB;
	cout << "Nhap diem mon Toan: "; cin >> toan; cout << endl;
	cout << "	he so: "; cin >> hsToan; cout << endl;
	cout << "Nhap diem mon Ly: "; cin >> ly; cout << endl;
	cout << "	he so: "; cin >> hsLy; cout << endl;
	cout << "Nhap diem mon Hoa: "; cin >> hoa; cout << endl;
	cout << "	he so: "; cin >> hsHoa; cout << endl;

	diemTB = toan * hsToan + ly * hsLy + hoa * hsHoa;
	cout << "Diem trung binh: " << diemTB <<endl;

	system("PAUSE");
	return 0;
}

//chua kiem tra dieu kien diem, he so nhap vao