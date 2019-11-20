#include<iostream>
using namespace std;

//actions with 1D array

//input value
void inputArray(int *a, int length) {
	for (int i = 0; i < length; i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << "\n======================================\n";
}

//insert
void insertElement(int *a, int &length, int position, int value) {
	length++;
	for (int i = length - 1; i > position; i--) {
		a[i] = a[i - 1];
	}
	a[position] = value;
	cout << "\n======================================\n";
}

//delete
void deleteElement(int *a, int &length, int position) {
	length--;
	if (length == 0) {
		a = NULL;
	}
	else {
		for (int i = position; i < length - 1; i++) {
			a[i] = a[i + 1];
		}
		a[length - 1] = 0;
	}
	cout << "\n======================================\n";
}

//modify
void modifyElement(int *a, int position, int value) {
	a[position] = value;
	cout << "\n======================================\n";
}
//print
void printArray(int *a, int length) {
	for (int i = 0; i < length; i++) {
		cout << "a[" << i << "] = " << a[i] << ", ";
	}
	cout << "\n======================================\n";
}

int main() {
	int length;
	int *a;
	int position, action;

	//input array length
	cout << "Input array length: ";
	cin >> length; cout << endl;
	while (length <= 0) {
		cout << "Invalid length. Input again: ";
		cin >> length; cout << endl;
	}

	//creat array
	a = new int[length];
	inputArray(a, length);
	printArray(a, length);

	//action list
	cout << "Actions: \n" << "1. Insert \n" << "2. Delete \n" << "3. Modify \n";
	
	//choose an action
	cout << "Choose an action: ";
	cin >> action;
	while (action < 1 || action > 3) {
		cout << "Invalid. Input again: ";
		cin >> action;
	}
	cout << "\n======================================\n";

	//choose position
	cout << "Input the position to do action (from 0 to " << length - 1 << "): ";
	cin >> position; cout << endl;
	while (position < 0 || position >= length) {
		cout << "Invalid position. Input again: ";
		cin >> position; cout << endl;
	}

	//do action
	switch (action) {
	case 1: 
		int value1;
		cout << "Input value: ";
		cin >> value1; cout << endl;
		insertElement(a, length, position, value1);
		break;
	case 2:
		deleteElement(a, length, position);
		break;
	case 3:
		int value3;
		cout << "Input value: ";
		cin >> value3; cout << endl;
		modifyElement(a, position, value3);
		break;
	}

	//output array
	cout << "\nOutput array: \n";
	printArray(a, length);

	system("pause");
	return 0;
}