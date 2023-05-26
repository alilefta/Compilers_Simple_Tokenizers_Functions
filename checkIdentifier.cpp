#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

bool checkKeyWord(char s1[], char s2[]) {
	if (strcmp(s1, s2) == 0) {
		return false;
	}
	return true;
}

bool checkSpace(char s1[]) {
	for(int i = 0; i < strlen(s1); i++)
		if (s1[i] == ' ')
			return false;
	return true;
}

bool checkNum(char s1[]) {
	char nums[11] = {0, 1, 2,3,4,5,6,7,8,9};
	nums[10] = '\0';
	for (int i = 0; i < strlen(nums); i++) {
		if(nums[i] == s1[0])
			return false;
	}
	return true;
}



void main2() {
	FILE* f1 = fopen("code.txt", "r");
	FILE* f2 = fopen("keywords.txt", "r");

	char str1[30];
	int i = 0;
	// Check for keywords 
	while (!feof(f2)) {
		if (EOF) break;
		char c;
		c = fgetc(f2);
		if (c == ' ') break;
		str1[i] = c;
		i++;
	}

	if (!checkSpace(str1)) {
		cout << "Invalid identifier, has space";
	}
	if (!checkNum(str1)) {
		cout << "Invalid identifier, has number";
	}

	char str2[30];

	while (!feof(f2)) {
		fgets(str2, 30, f2);
		if (!checkKeyWord(str1, str2)) {
			cout << "Invalid identifier, reserved keyword";
		}
	}


	cout << "RUN";
	_getch();
}