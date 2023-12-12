#include <iostream>
using namespace std;

void menu();
double calculation(double input1, double input2, double answer);
double triple(double input1, double input2, double input3, double answer, double answer2);

int main() {

	double uinput1 = 0;
	double uinput2 = 0;
	double uinput3 = 0;
	int uanswer = 0;
	int answer = 0;

	while (uanswer != 5) { // while loop to keep repeating unless the user enters 5 when propmted in menu
		menu(); // calls on the menu function

		while (!(cin >> uanswer) || uanswer > 5 || uanswer <= 0) { // a while loop that repeats if the input isn't a number or is above 5 or below 1
			cout << "please enter valid number" << endl;
			menu(); // calls on the menu function
			cin.clear(); // clears the previous input so that it can be repeated
			cin.ignore(123, '\n');
		}

		if (uanswer == 5) {
			return 0; // if the user inputs 5 after menu displays it will exit the program
		}

		
			try {
				cout << "are you using 2 or 3 numbers?" << endl;
				cin >> answer;
				if (cin.fail() || answer > 3 || answer <= 1) {
					throw 505;
				}
			}
			catch (...) {
				cout << "please enter a valid number" << endl;
				cin.clear();
				cin.ignore(123, '\n');
			}
		

		if (answer == 2) { // if the user wants to use 2 numbers
			cout << "input two numbers to use in calculation" << endl;
			while (!(cin >> uinput1) || !(cin >> uinput2)) {
				cout << "please enter valid numbers" << endl;
				cin.clear();
				cin.ignore(123, '\n');
			}

			calculation(uinput1, uinput2, uanswer); // calls on the calculation function to use the numbers inputted by user for calculation

			double returnedTotal = calculation(uinput1, uinput2, uanswer); // makes this value equal to the returned value (total) from the function
			cout << returnedTotal << endl << endl;// two endl to separate this from the next calculation
		}
		if (answer == 3) { // if the user wants to use three numbers
			cout << "input three numbers to use in calculation" << endl;
			while (!(cin >> uinput1) || !(cin >> uinput2) || !(cin >> uinput3)) {
				cout << "please enter valid numbers" << endl;
				cin.clear();
				cin.ignore(123, '\n');
			}
			cout << "what would you like to use for third number? " << endl;
			menu(); // displays menu again to chose the type of calculation between second and thrid number
			while (!(cin >> answer) || answer > 5 || answer <= 0) {
				cout << "please enter valid number" << endl;
				menu();
				cin.clear();
				cin.ignore(123, '\n');
			}

			if (answer == 5) { // second option for the user to exit program if they made a mistake
				return 0;
			}


			triple(uinput1, uinput2, uinput3, uanswer, answer); // calls on the calculation function to use the numbers inputted by user for calculation

			double returnedtotal = triple(uinput1, uinput2, uinput3, uanswer, answer); // makes this value equal to the returned value (total) from the function
			cout << returnedtotal << endl << endl; // two endl to separate this from the next calculation
		}
	}
}

void menu() { // function that when called (menu();) will output the cout
	cout << "pick an option" << endl << "1. addition" << endl << "2. subtraction" << endl << "3. multiplication" << endl << "4. division" << endl << "5. exit" << endl; // prompts the user with the options for calculator

}
double calculation(double input1, double input2, double answer) {
	double total = 0;
	if (answer == 1) { // if the user inputted 1 at the start of the program then it will use addition etc
		total = input1 + input2;
	}
	else if (answer == 2) {
		total = input1 - input2;
	}
	else if (answer == 3) {
		total = input1 * input2;
	}
	else if (answer == 4) {
		total = input1 / input2;
	}
	return total; // exits function and returns what the total became after the if statement

}
double triple(double input1, double input2, double input3, double answer, double answer2) {
	double total = 0;
	if (answer == 1) { // if the user inputted 1 at the start of the program then it will use addition etc for first number
		if (answer2 == 1) { // if the user inputted 1 after wanting to use three numbers then it will use addition 
			total = input1 + input2 + input3;
		}
		if (answer2 == 2) { // but if the user inputted 2 after wanting to use three numbers it will use subtraction between number 2 and 3 
			total = input1 + input2 - input3;
		}
		if (answer2 == 3) {
			total = input1 + (input2 * input3);
		}
		if (answer2 == 4) {
			total = input1 + (input2 / input3);
		}
	}
	else if (answer == 2) {
		if (answer2 == 1) { // repeated so that all possible combinations can be performed
			total = input1 - input2 + input3;
		}
		if (answer2 == 2) {
			total = input1 - input2 - input3;
		}
		if (answer2 == 3) {
			total = input1 - (input2 * input3);
		}
		if (answer2 == 4) {
			total = input1 - (input2 / input3);
		}
	}
	else if (answer == 3) {
		if (answer2 == 1) {
			total = input1 * input2 + input3;
		}
		if (answer2 == 2) {
			total = input1 * input2 - input3;
		}
		if (answer2 == 3) {
			total = input1 * input2 * input3;
		}
		if (answer2 == 4) {
			total = input1 * (input2 / input3);
		}
	}
	else if (answer == 4) {
		if (answer2 == 1) {
			total = input1 / input2 + input3;
		}
		if (answer2 == 2) {
			total = input1 / input2 - input3;
		}
		if (answer2 == 3) {
			total = input1 / input2 * input3;
		}
		if (answer2 == 1) {
			total = input1 / input2 / input3;
		}
	}
	return total; // exits function and returns what the total became after the if statement
}