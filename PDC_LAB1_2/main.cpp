#include <iostream>
#include<Windows.h>
#include"truth.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Truth truth = Truth();
	truth.calcOr();
	truth.calcAnd();
	truth.calcXor();
	return 0;
}
