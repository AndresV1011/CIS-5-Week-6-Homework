#include <iostream>
#include <string>
using namespace std;
// Homework 6 — Andres Valenzuela
// CIS 5 Week 06 · Menu

int main() {
	int choice;
	int number;
	string name;
	//Menu

	do {
		cout << "==== Menu ====\n";
		cout << "\n";
		cout << "Type 1 to continue!\n";
		cout << "Type 2 to count down!\n";
		cout << "Type 3 to exit!\n";
		cout << "What do you want to do?\n";
		cin >> choice;


		//choice 1
		if (choice == 1) {
			cout << "Enter your name:";
			cin >> name;
			cout << "Hello " << name << "!" << "\n";
		}
		//choice 2
		else if (choice == 2) {
			cout << "Enter a number:";
			cin >> number;
			while (number >= 0) { cout << number << "\n"; number = number - 1; }
		}
		//choice 3
		else if (choice == 3) { cout << "Exiting...\n"; }
		//invalid choice
		else { cout << "Invalid choice!\n"; }
	} while (choice != 3);
	cout << "The Menu is close.\n";


	return 0;
}
