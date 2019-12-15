#include<iostream>
#include<string>
using namespace std;

//ham nguyen mau giup tan dung 1 ham cho nhieu kieu du lieu
//dinh nghia ham nguyen mau:

template<class New> New sum(New a, New b) {
	return a + b;
}

//New la kieu du lieu dai dien moi dinh nghia
//thuong dat ten kieu du lieu do la T

int main() {
	cout << "A + B = " << sum<char>('A', 'B') << endl;
	cout << "O + ke = " << sum<string>("O", "ke") << endl;
	cout << "97 + 97 = " << sum<int>(97, 97) << endl;
	cout << " 7.9 + 22.8 = " << sum<float>(7.9, 22.8) << endl;

	system("pause");
	return 0;
}