#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;


void main() {
	struct Student {
		char name[30];
		char stage[30];
		int age;
		double compiler_degree;
	};


	struct Student std;
	
	for (int i = 0; i < 2; i++) {
		cout << "enter your name: ";
		cin >> std.name;
		cout << "enter your stage: ";
		cin >> std.stage;

		cout << "enter your age: ";
		cin >> std.age;

		cout << "enter your compiler_degree: ";
		cin >> std.compiler_degree;


		cout << "[name: " << std.name << ", stage: " << std.stage << ", age: " << std.age << ", compiler degree: " << std.compiler_degree << "]\n";
	}


	_getch();


}