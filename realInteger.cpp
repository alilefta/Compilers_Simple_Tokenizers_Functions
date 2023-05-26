#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

bool checkMinus(char str2[]) {
	if (str2[0] == '-' && str2[1] == '-') {
		return false;
	}
	else if (str2[0] == '-' && str2[1] != '-') {
		return true;
	}
	for (int i = 1; i < strlen(str2); i++) {
		if (str2[i] == '-') return false;
	}
	return true;
}




void main4() {
	char c[20];
	cout << "Enter number\n";
	cin >> c;

	if (checkMinus(c)) {
		cout << "Valid number";

	}
	else {
		cout << "Invalid number";
	}
	_getch();
}