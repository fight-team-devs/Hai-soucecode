#include<iostream>
using namespace std;
#include<string>

//class cha
class Person {
	string ID;
	string name;
	int age;
public:
	Person(string, string, int);
	string getID();
	string getName();
	int getAge();
};

//class con
class Student : Person {
	string studentID;
	int level;
public:
	Student(string, string, int, string, int);
	string getStudentID();
	void showInfo();
	int getLevel();
	void goToSchool();
	void doExam();
};

//tao doi tuong Person
Person::Person(string ID, string name, int age) {
	this->ID = ID;
	this->name = name;
	this->age = age;
}

string Person::getID() {
	return ID;
}

string Person::getName() {
	return name;
}

int Person::getAge() {
	return age;
}

//tao doi tuong Student duoc ke thua cac thong tin tu Person
//tham so truyen vao Person se duoc ap dung cho Student
//Student se khai thac duoc moi thu tu Person
Student::Student(string ID, string name, int age, string studentID, int level) : Person(ID, name, age) {
	this->studentID = studentID;
	this->level = level;
}

string Student::getStudentID() {
	return studentID;
}

int Student::getLevel() {
	return level;
}

void Student::showInfo() {
	cout << "ID: " << getID() << endl;
	cout << "Name: " << getName() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Student ID: " << getStudentID() << endl;
	cout << "Level: " << getLevel() << endl;
}

void Student::goToSchool() {
	cout << "This student goes to school.\n";
}

void Student::doExam() {
	cout << "This student does an exam.\n";
}

int main() {
	string ID = "1428xxxxx";
	string name = "Hai";
	int age = 22;
	string studentID = "20151184";
	int level = 5;

	Student Hai(ID, name, age, studentID, level);

	Hai.showInfo();
	Hai.goToSchool();
	Hai.doExam();

	system("pause");
	return 0;
}