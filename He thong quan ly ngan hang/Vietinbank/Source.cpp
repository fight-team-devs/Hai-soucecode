#include<iostream>
using namespace std;
#include<string>

void xuatDanhSachTheoTen(string* tenArr, int tenArrLength) {
	string temp;
	// sap xep theo ten
	for (int i = 0; i < tenArrLength - 1; i++) {
		if (tenArr[i + 1][0] < tenArr[i][0]) {
			temp = tenArr[i + 1];
			tenArr[i + 1] = tenArr[i];
			tenArr[i] = temp;
		}
	}
}

void xuatDanhSachTheoID(string* IDArr, int IDArrLength) {
	string temp;
	// sap xep theo ID
	for (int i = 0; i < IDArrLength - 1; i++) {
		if (IDArr[i + 1][0] < IDArr[i][0]) {
			temp = IDArr[i + 1];
			IDArr[i + 1] = IDArr[i];
			IDArr[i] = temp;
		}
	}
}

class Users {
	int ID;
	string ten;
	int ngaySinh;
	string email;
	long int soTK;
	string chiNhanh;
	long int soDuTK;
public:
	Users(int ID, string ten, int ngaySinh, string email, long int soTK, string chiNhanh, long int soDuTK) {
		this->ID = ID;
		this->ten = ten;
		this->ngaySinh = ngaySinh;
		this->email = email;
		this->soTK = soTK;
		this->chiNhanh = chiNhanh;
		this->soDuTK = soDuTK;
		cout << "Da tao tai khoan thanh cong. \n\n";
	};

	void setID(int ID) {
		this->ID = ID;
	}

	void setTen(string ten) {
		this->ten = ten;
	}

	void setNgaySinh(int ngaySinh) {
		this->ngaySinh = ngaySinh;
	}

	void setEmail(string email) {
		this->email = email;
	}

	void setSoTK(long int soTK) {
		this->soTK = soTK;
	}

	void setChiNhanh(string chiNhanh) {
		this->chiNhanh = chiNhanh;
	}

	void setSoDuTK(long int soDuTK) {
		this->soDuTK = soDuTK;
	}

	void suaThongTin(string tenSua, int ngaySinhSua, string emailSua) {
		this->ten = tenSua;
		this->ngaySinh = ngaySinhSua;
		this->email = emailSua;

	}

	void showThongTin() {
		cout << "ID: " << this->ID << endl;
		cout << "Ho ten: " << this->ten << endl;
		cout << "Ngay sinh: " << this->ngaySinh << endl;
		cout << "Email: " << this->email << endl;
		cout << "So tai khoan: " << this->soTK << endl;
		cout << "Chi nhanh: " << this->chiNhanh << endl;
		cout << "So du tai khoan: " << this->soDuTK << endl;
	}

	// xoa thong tin nguoi dung
	~Users() {};

	/*void xoaTaiKhoan(int* ID, int IDXoa, int IDLength) {
		for (int i = 0; i < IDLength; i++) {
			if (IDXoa = ID[i])
		}
	}*/
};

//ten hop le chi chua cac chu cai thuong hoac chu in hoa
bool kiemTraTen(string s) {
	int length = s.length();
	for (int i = 0; i < length; i++) {
		if (s[i] != ' ' && (s[i] < 'A' || s[i] > 'Z' && s[i] < 'a' || s[i] > 'z')) {
			return false;
		}
	}
	return true;
}

//sau khi thuc hien kiem tra, chuoi ten chi con cac chu cai
void chuanHoaTen(string& s) {
	int length = s.length();

	//xoa khoang trang o dau dong
	while (s[0] == ' ') {
		s.erase(0, 1);
		length--;
	}

	for (int i = 0; i < length - 1; i++) {
		//viet hoa chu cai dau
		if (i == 0) {
			if (s[0] >= 'a') {
				s[0] -= 32;
			}
		}
		//cat khoang trang
		if (s[i] == ' ' && s[i + 1] == ' ') {
			s.erase(i, 1);
			length -= 1;
			i--;
			continue;
		}
		//viet hoa chu cai dau moi chu
		if (s[i] == ' ' && s[i + 1] >= 'a') {
			s[i + 1] -= 32;
		}
		//viet thuong chu cai sau chu cai dau
		if (s[i] != ' ' && s[i + 1] <= 'Z' && s[i + 1] != ' ') {
			s[i + 1] += 32;
		}
	}
}
//bool chuanHoaThongTin(Users& A) {
//	// check 
//	bool flag = true;
//
//}

int main() {
	int ID = 1000;
	string ten ="";
	int ngaySinh = 0;
	string email = "";
	long int soTK = 10000;
	string chiNhanh = "";
	long int soDuTK = 0;

	string* tenArr;
	int* IDArr;
	int luaChon;
	int chonChiNhanh;

	while (1) {
		cout << "===============Chao mung ban den voi he thong dang ky mo tai khoan ngan hang Vietinbank===============\n";
		cout << "Moi ban nhap lua chon: \n";
		cout << " 1. Dang ky tai khoan moi.\n";
		cout << " 2. Xem danh sach khach hang.\n";
		cout << " 3. Sua thong tin dang ky.\n";
		cout << " 4. Xoa tai khoan. \n";
		cout << " 5. Tim tai khoan. \n";
		cout << " 6. Thoat. \n\n";
		cout << "Lua chon: ";
		cin >> luaChon;

		switch (luaChon) {
		case 1: {
			system("cls");
			cout << "============Tao tai khoan moi============\n";

			cout << "Ho ten: ";
			cin.ignore();
			getline(cin, ten);
			bool checkTen = kiemTraTen(ten);
			while (checkTen == false) {
				cout << "Chi duoc nhap chu cai va dau cach. Moi ban nhap lai: ";
				getline(cin, ten);
				checkTen = kiemTraTen(ten);
			}
			chuanHoaTen(ten);
			//cout << endl;

			cout << "Ngay sinh (ddmmyyyy): ";
			cin >> ngaySinh;
			//cout << endl;

			cout << "Email: ";
			cin.ignore();
			getline(cin, email);
			//cout << endl;

			cout << "Chi nhanh: \n";
			cout << " 1. Hai Ba Trung \n";
			cout << " 2. Hoan Kiem \n";
			cout << " 3. Ba Dinh \n";
			cout << " 4. Tu Liem \n";
			cout << " 5. Thanh Xuan \n";
			cin >> chonChiNhanh;
			while (chonChiNhanh < 1 || chonChiNhanh > 5) {
				cout << "Moi ban chon lai: ";
				cin >> chonChiNhanh;
			}
			switch (chonChiNhanh) {
			case 1: chiNhanh = "Hai Ba Trung";
			case 2: chiNhanh = "Hoan Kiem";
			case 3: chiNhanh = "Ba Dinh";
			case 4: chiNhanh = "Tu Liem";
			case 5: chiNhanh = "Thanh Xuan";
			}

			Users N(ID, ten, ngaySinh, email, soTK, chiNhanh, soDuTK);
			N.showThongTin();
			ID++;
			soTK++;

			cout << endl;
		}

		/*case 2:

		case 3:

		case 4:

		case 5:*/

		case 6:
			break;
			//thoat he thong

		default:
			while (luaChon < 1 || luaChon > 6) {
				cout << "Nhap lai lua chon: ";
				cin >> luaChon;
			}
		}
		if (luaChon == 6) {
			break;
		}
		system("pause");
		system("cls");
	}

	system("cls");
	//system("pause");
	return 0;
}