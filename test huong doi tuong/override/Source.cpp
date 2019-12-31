#include<iostream>
using namespace std;
#include<string>

class NhanVien {
protected:
	string ten;
	int tienLuong , tienThuong;
public:
	NhanVien();
	NhanVien(string, int);
	virtual void thuong();
	void nhanTien();
};

NhanVien::NhanVien() {
	this->ten = "";
	this->tienLuong = 0;
	this->tienThuong = 0;
}

NhanVien::NhanVien(string ten, int luong) {
	this->ten = ten;
	this->tienLuong = luong;
}

void NhanVien::thuong() {
	this->tienThuong = 0.1 * this->tienLuong;
}

void NhanVien::nhanTien() {
	cout << ten << " nhan: \n";
	cout << "Tien luong: " << tienLuong << endl;
	cout << "Tien thuong: " << tienThuong << endl;
}

class GiamDoc : NhanVien {
public:
	GiamDoc(string ten, int luong) {
		this->ten = ten;
		this->tienLuong = luong;
	};
	void thuong() override {
		this->tienThuong = 0.5 * tienLuong;
	}

	void nhan() {
		nhanTien();
	}
};

class TruongPhong : NhanVien {
public:
	TruongPhong(string ten, int luong) : NhanVien(ten, luong) {
		this->ten = ten;
		this->tienLuong = luong;
	}
	void thuong() override {
		this->tienThuong = 0.2 * tienLuong;
	}

	void nhan() {
		nhanTien();
	}
};

int main() {
	GiamDoc giamDoc("Hai", 10000);
	giamDoc.thuong();
	giamDoc.nhan();

	TruongPhong truongPhong("Nguyen", 10000);
	truongPhong.thuong();
	truongPhong.nhan();

	system("pause");
	return 0;
}