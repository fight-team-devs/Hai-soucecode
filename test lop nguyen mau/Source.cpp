#include<iostream>
using namespace std;
#include<string>

template<class A, class B> class KeyValue {
public:
	A key;
	B value;
public:
	KeyValue(A, B);
	void showKeyValue();
};

template<class A, class B> KeyValue<A, B>::KeyValue(A key, B value) {
	this->key = key;
	this->value = value;
}

template<class A, class B> void KeyValue<A, B>::showKeyValue() {
	cout << "Key: " << key << " - value: " << value << endl;
}

int main() {
	KeyValue<string, string> Couple("boy", "girl");
	KeyValue<int, string> Num(1, "one");
	
	Couple.showKeyValue();
	Num.showKeyValue();

	system("pause");
	return 0;
}