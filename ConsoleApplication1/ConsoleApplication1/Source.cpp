#include<iostream> 
using namespace std;

int main() {
	int r;
	for (int i = 0; i < 7; ++i) {
		r = rand();
		cout << r;
	}
	system("pause");
	return 0;
}