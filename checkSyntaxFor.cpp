#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

char arr[3];
bool iscorrect(char* str) {
	FILE* f1 = fopen("syntax.txt", "r");
	int semicolon = 0,
		bracket1 = 0,
		bracket2 = 0,
		flag = 0;

	int i;
	for (i = 0; i < 3; i++) {
		arr[i] = str[i];
	}
	if (strcmp(arr, "for") != 0) {
		printf("\n syntax error: 'for' keyword spelling is not correct");
		return;

	}
	while (i != strlen(str)) {
		char ch = str[i++];
		if (ch == '(') {
			bracket1++;
		}
		else if (ch == ')') {
			bracket2++;
		}
		else if (ch == ';') {
			semicolon++;
		}
		else {
			continue;
		}
	}
	if (semicolon == 0) {
		printf("\n syntax error: two semicolons are missing");
		flag++;
	}
	if (semicolon == 1) {
		printf("\n syntax error: one missing semicolon");
		flag++;
	}	
	if (semicolon > 2) {
		printf("\n syntax error: too many semicolons");
		flag++;
	}
	else if (str[strlen(str) - 1] != ')') {
		printf("\n syntax error: no closing parenthesis");
		flag++;
	}
	else if (str[3] == ' ' && str[4] != '(') {
		printf("\n syntax error: no opening parenthesis");
		flag++;
	}
	else
		if (bracket1 != 1 || bracket2 != 1 || bracket1 != bracket2) {
			printf("\n syntax error: brackets are missing or over their number");

			

		}

	}





void main22() {
	



	_getch();
}