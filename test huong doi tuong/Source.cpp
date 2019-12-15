#include<iostream>
#include<string>
using namespace std;
#include<fstream>

class SinhVien {
public:
	string ten;
	int tuoi;
	string id;
	string diaChi;

	SinhVien(string ten, int tuoi, string id, string diaChi) {
		cout << "Nhap thong tin sinh vien.\n";
		this->ten = ten;
		this->tuoi = tuoi;
		this->id = id;
		this->diaChi = diaChi;
	}
	   
	~SinhVien() {
		cout << "Da xoa thong tin sinh vien.\n";
	}
};



void ghiFile(SinhVien Hai, fstream &OUTPUT) {
	OUTPUT << Hai.ten << endl;
	OUTPUT << Hai.tuoi << endl;
	OUTPUT << Hai.id << endl;
	OUTPUT << Hai.diaChi << endl;
}

int main() {
	//mo file lay ra data

	//cach 1
	fstream INPUT("INPUT.txt", ios::in);
	//hoac C:\\Users\\HAIPC\\Documents\\GitHub\\Hai-soucecode\\test huong doi tuong\\INPUT.txt
	//hoac C:/Users/HAIPC/Documents/GitHub/Hai-soucecode/test huong doi tuong/INPUT.txt

	//cach 2
	//fstream INPUT;
	//INPUT.open("INPUT.txt", ios::in);

	string ten, id, diaChi;
	int tuoi;
	getline(INPUT, ten);
	INPUT >> tuoi;
	INPUT.ignore();
	getline(INPUT, id);
	getline(INPUT, diaChi);

	INPUT.close();

	SinhVien Hai(ten, tuoi, id, diaChi);

	//tao file ghi data vao
	fstream OUTPUT("OUTPUT.txt", ios::out);
	ghiFile(Hai, OUTPUT);
	OUTPUT.close();

	system("pause");
	return 0;
}