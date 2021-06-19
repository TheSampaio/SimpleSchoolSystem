#pragma once

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class App {

	// Basic menu
	void menu() {
		cout << "-----------------------------" << endl;
		cout << " School System | C++ Edition " << endl;
		cout << "-----------------------------" << endl << endl;
	}

	// Input a text and a float number
	float getFloat(string text) {
		cout << text;
		float number;
		cin >> number;
		return number;
	}

	// Calculate all the variables
	void calculator() {
		float num01 = getFloat("Insert your first note: ");
		float num02 = getFloat("Insert your second note: ");
		float num03 = getFloat("Insert your third note: ");
		float num04 = getFloat("Insert your fourth note: ");

		float finalNote = (num01 + num02 + num03 + num04) / 2;

		cout << endl << "Your final note is: " << finalNote << endl;

		if (finalNote >= 10) { cout << "You're aproved!" << endl << endl; }
		else { cout << "You're reproved" << endl << endl; }
	}

public:

	// Function that run the aplication
	void run() {
		
		while (true) {
			this->menu();
			this->calculator();
			
			cout << "Would you like calculate again? (y/n)" << endl << endl;
			cout << "Option: ";

			string option;
			cin >> option;

			system("cls");
			if (option == "n") { break; }
		}
	}
};