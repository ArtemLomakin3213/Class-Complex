#include <iostream>
#include <Windows.h>
#include "Complex.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Complex a(-12,-3);
	Complex b(12,3);
	Complex c(12,3);

	~a;
	cout << a.to_string();
	return 0;
}