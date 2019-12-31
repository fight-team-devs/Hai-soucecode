#include<iostream>
using namespace std;
#include<fstream>
#include<string>

void showInfo(string name, int ID, int *year) {
	cout << "Name: " << name << endl;
	cout << "ID: " << ID << endl;
	cout << "Year: ";
	for (int i = 0; i < 5; i++) {
		cout << year[i] << " ";
	}
	cout << endl;
}

int main() {
	string name;
	int ID;
	int *year;
	fstream in("input.txt", ios::in);

	getline(in, name);

	in >> ID;

	year = new int[5];
	for (int i = 0; i < 5; i++) {
		in >> year[i];
	}

	showInfo(name, ID, year);

	in.close();

	system("pause");
	return 0;
}