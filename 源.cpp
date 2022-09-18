#include<iostream>
#include<Windows.h>
using namespace std;
int main(void) {
	unsigned long long a = 0;
	unsigned long long b = 1;
	int i = 0;
	/*
	for (i = 0; i < 64; i++) {
		a = a + b;
		b = b * 2;
		cout << "和是:" << a << endl;
	}
	*/
	while (i < 64) {
		a = a + b;
		b = b * 2;
		i++;
		cout << "2的"<<i <<"次方是:" <<a<< endl;
	}
	system("pause");
	return 0;
}