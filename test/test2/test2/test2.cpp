#include <iostream>
#include <cmath>
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

	while (uanswer != 5) {
		menu();

		while (!(cin >> uanswer) || uanswer > 5 || uanswer <= 0) {
			cout << "please enter valid number" << endl;
			menu();
			cin.clear();
			cin.ignore(123, '\n');
		}

		if (uanswer == 5) {
			return 0;
		}

		cout << "are you using 2 or 3 numbers?" << endl;
		while (!(cin >> answer) || answer > 3 || answer <= 1) {
			cout << "please enter valid number" << endl;
			cout << "are you using 2 or 3 numbers?" << endl;
			cin.clear();
			cin.ignore(123, '\n');
		}
		if (answer == 2) {
			cout << "input two numbers to use in calculation" << endl;
			while (!(cin >> uinput1) || !(cin >> uinput2)) {
				cout << "please enter valid numbers" << endl;
				cin.clear();
				cin.ignore(123, '\n');
			}

			calculation(uinput1, uinput2, uanswer);

			double returnedTotal = calculation(uinput1, uinput2, uanswer);
			cout << returnedTotal << endl << endl;
		}
		if (answer == 3) {
			cout << "input three numbers to use in calculation" << endl;
			while (!(cin >> uinput1) || !(cin >> uinput2) || !(cin >> uinput3)) {
				cout << "please enter valid numbers" << endl;
				cin.clear();
				cin.ignore(123, '\n');
			}
			cout << "what would you like to use for third number? " << endl;
			menu();
			while (!(cin >> answer) || answer > 5 || answer <= 0) {
				cout << "please enter valid number" << endl;
				menu();
				cin.clear();
				cin.ignore(123, '\n');
			}

			if (answer == 5) {
				return 0;
			}


			triple(uinput1, uinput2, uinput3, uanswer, answer);

			double returnedtotal = triple(uinput1, uinput2, uinput3, uanswer, answer);
			cout << returnedtotal << endl << endl;
		}
	}
}

void menu() {
	cout << "pick an option" << endl << "1. addition" << endl << "2. subtraction" << endl << "3. multiplication" << endl << "4. division" << endl << "5. exit" << endl;

}
double calculation(double input1, double input2, double answer) {
	double total = 0;
	if (answer == 1) {
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
	else {
		cout << "input valid number" << endl;
	}
	return total;

}
double triple(double input1, double input2, double input3, double answer, double answer2) {
	double total = 0;
	if (answer == 1) {
		if (answer2 == 1) {
			total = input1 + input2 + input3;
		}
		if (answer2 == 2) {
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
		if (answer2 == 1) {
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
	else {
		cout << "input valid number" << endl;
	}
	return total;
}