#include<iostream>
using namespace std;

int click(int n, int m) {
	int count = 0;
	if (m < n) {
		count = n - m;
		return count;
	}
	else {
		while (m > 2 * n) {
			//an nut trang
			n *= 2;
			count++;
		}
		count += n - (m / 2) + 1;
		return count;
	}
}

int main() {
	int n, m;

	cout << "So meo ban dau: n = ";
	cin >> n;
	cout << "So meo giai cuu the gioi: m = ";
	cin >> m;
	while (n == m || n <= 0 || m <= 0) {
		cout << "The nay ai choi. Nhap lai di: \n";
		cout << "So meo ban dau: n = ";
		cin >> n;
		cout << "So meo giai cuu the gioi: m = ";
		cin >> m;
	}
	cout << "***********************************\n";

	cout << "The gioi duoc cuu bang " << click(n, m) << " click la du.\n";
	cout << "***********************************\n";

	system("pause");
	return 0;
}