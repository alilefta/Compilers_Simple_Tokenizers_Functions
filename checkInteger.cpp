#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

bool checkInteger(char str2[]) {
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


bool isInteger(char* str1) {
	int i, len = strlen(str1);

	if (len == 0) {
		return false;
	}
	for (i = 0; i < len; i++) {
		if (str1[i] != '0' && str1[i] != '1' && str1[i] != '2'
			&& str1[i] != '3' && str1[i] != '4' && str1[i] != '5'
			&& str1[i] != '6' && str1[i] != '7' && str1[i] != '8'
			&& str1[i] != '9' || (str1[i] == '-' && i > 0) || str1[i] == ' ') {
			return true;
		}
	}
	return true;
}

bool checkDouble(char s[20]) {
	int dotCount = 0;

	if (s[0] == '.' ||  s[strlen(s) -1] == '.') return false;
	cout << (strlen(s) - 1 == '.');

	for (int i = 1; i < strlen(s); i++) {
		if (s[i] == '.') {
			dotCount++;
		}
	}

	if (dotCount == 1 ) {
		
		return true;
	} 
	else {

		return false;
	}
}

void main99() {
	char c[20] = "10.";



	if (isInteger(c)) {
		if(checkDouble(c)){
			cout << "Double\n";
		}
		else {
			cout << "Integer";
		}
		cout << "Valid number";

	}
	else {
		cout << "Invalid number";
	}
	_getch();



}