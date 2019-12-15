#include<iostream>
#include<string>
using namespace std;
#include<fstream>

class SinhVien {
private:
	string ten;
	int tuoi;
	string id;
	string diaChi;

public:
	//can khai bao ham tao mac dinh de tao doi tuong
	SinhVien();

	void setInfo(string, int, string, string);

	string getTen();
	int getTuoi();
	string getID();
	string getDiaChi();

	~SinhVien() {
		cout << "Da xoa thong tin sinh vien.\n";
	}
};

SinhVien::SinhVien() {
	this->ten = "none";
	this->tuoi = 0;
	this->id = "none";
	this->diaChi = "none";
}

void SinhVien::setInfo(string ten, int tuoi, string id, string diaChi) {
	this->ten = ten;
	this->tuoi = tuoi;
	this->id = id;
	this->diaChi = diaChi;
}

string SinhVien::getTen() {
	return this->ten;
}

int SinhVien::getTuoi() {
	return this->tuoi;
}

string SinhVien::getID() {
	return this->id;
}

string SinhVien::getDiaChi() {
	return this->diaChi;
}

int main() {
	string ten, id, diaChi;
	int tuoi;
	ten = "Hai";
	tuoi = 22;
	id = "20151184";
	diaChi = "Hai Duong";

	SinhVien Hai;

	cout << "========== Truoc khi khoi tao thong tin: ==========\n";
	cout << "Ten: " << Hai.getTen() << endl;
	cout << "Tuoi: " << Hai.getTuoi() << endl;
	cout << "ID: " << Hai.getID() << endl;
	cout << "Dia chi: " << Hai.getDiaChi() << endl;

	Hai.setInfo(ten, tuoi, id, diaChi);

	cout << "========== Sau khi khoi tao thong tin ==========\n";
	cout << "Ten: " << Hai.getTen() << endl;
	cout << "Tuoi: " << Hai.getTuoi() << endl;
	cout << "ID: " << Hai.getID() << endl;
	cout << "Dia chi: " << Hai.getDiaChi() << endl;
	cout << "================================================\n";
	

	system("pause");
	return 0;
}