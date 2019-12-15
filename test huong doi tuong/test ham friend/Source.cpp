#include<iostream>
using namespace std;

class A;

class B {
public:
	//ham showA() cua B la friend cua A
	void showA(A);
};

class A {
	int data;
public:
	A(){
		data = 100;
	}
	void showData();
	friend void setData(A&);
	friend void B::showA(A);
	friend class C;
};

//C la lop friend cua A
class C {
public:
	void setADtata(A&);
	void showAformC(A);
};

//ham thanh phan co the truy cap truc tiep thanh phan private
void A::showData() {
	cout << data << endl;
}

//ham ban phai truy cap thanh phan private thong qua 1 doi tuong
void setData(A& a) {
	a.data = 200;
}

void B::showA(A a) {
	cout << a.data << endl;
}

void C::setADtata(A& a) {
	a.data = 300;
}

void C::showAformC(A a) {
	cout << "from C: a.data = " << a.data << endl;
}


int main() {
	A a;
	a.showData();
	setData(a);
	a.showData();
	system("pause");

	B b;
	b.showA(a);
	system("pause");

	C c;
	c.setADtata(a);
	c.showAformC(a);

	system("pause");
	return 0;
}