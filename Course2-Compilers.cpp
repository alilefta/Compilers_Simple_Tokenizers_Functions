#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

void main3() {
	FILE* f1 = fopen("ali.txt", "w");
	
	char c[20];
	
	while (true) {
		while (c != " ") {
			gets_s(c);
			fputs(c, f1);

		}
		if (c == " ") break;
	}



	fclose(f1);



	_getch();
}