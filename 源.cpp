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
		cout << "����:" << a << endl;
	}
	*/
	while (i < 64) {
		a = a + b;
		b = b * 2;
		i++;
		cout << "2��"<<i <<"�η���:" <<a<< endl;
	}
	system("pause");
	return 0;
}