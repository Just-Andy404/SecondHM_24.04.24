#include <iostream>
#include "MyBaseStr.h"
#include "Binary.h"
using namespace std;

int main() {

	int size = 100;

	char* binStr = new char[size];
	char* strPtr = new char[size];



	Binary bin1(20);
	bin1.input();
	bin1.show();

	Binary bin2(20);

	bin2.input();

	if (bin1 == bin2) {
		cout << "==Equal\n";

	}
	else {
		cout << "==Different\n";
	}

	if (bin1 != bin2) {
		cout << "!=not equal!\n";

	}
	else {
		cout << "!= equal\n";
	}

	bin1 = bin2;
	bin1.show();

	return 0;

}