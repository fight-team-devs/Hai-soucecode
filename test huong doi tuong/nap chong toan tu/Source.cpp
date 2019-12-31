/*
	Chồng toán tử: + - * / hai đa thức
	Những toán tử nào không thể nạp chồng?
	 . :: ?: sizeof
*/

#include<iostream>
using namespace std;

class PhanSo {
	int tu;
	int mau;
public:
	PhanSo() {
		tu = 0;
		mau = 1;
	}

	PhanSo(int tu, int mau) {
		this->tu = tu;
		this->mau = (mau == 0) ? 1 : mau;
	}

	void ketQua() {
		if (tu == mau) {
			cout << 1 << endl;
		}
		else if (tu == 0) {
			cout << 0 << endl;
		}
		else {
			cout << tu << "/" << mau << endl;
		}
	}

	//tu dinh nghia ra cac toan tu  + - * / cho phan so

	//co the dung ham con
	PhanSo operator + (PhanSo const&);
	PhanSo operator * (PhanSo const&);

	//hoac cung co the dung ham friend
	friend PhanSo operator - (PhanSo const&, PhanSo const&);
	friend PhanSo operator / (PhanSo const&, PhanSo const&);
};

//khi dung ham con thi chi can truyen vao 1 phan so
PhanSo PhanSo::operator+(PhanSo const& b) {
	PhanSo s;
	//o day tu == a.tu, mau == a.mau
	s.tu = tu * b.mau + mau * b.tu;
	s.mau = mau * b.mau;
	return s;
}

PhanSo PhanSo::operator*(PhanSo const& b) {
	PhanSo s;
	s.tu = tu * b.tu;
	s.mau = mau * b.mau;
	return s;
}
PhanSo operator-(PhanSo const& a, PhanSo const& b) {
	PhanSo s;
	s.tu = a.tu * b.mau - a.mau * b.tu;
	s.mau = a.mau * b.mau;
	return s;
}

PhanSo operator/(PhanSo const& a, PhanSo const& b) {
	PhanSo s;
	s.tu = a.tu * b.mau;
	s.mau = a.mau * b.tu;
	return s;
}

int main() {
	PhanSo a(1, 2), b(2, 4);

	PhanSo tong = a + b;
	PhanSo hieu = a - b;
	PhanSo tich = a * b;
	PhanSo thuong = a / b;

	tong.ketQua();
	hieu.ketQua();
	tich.ketQua();
	thuong.ketQua();

	system("pause");
	return 0;
}