#include <iostream>
#include <cmath>
using namespace std;

void menu();
void calculation();

int main() {
	
	menu();
	calculation();
	
}

void menu() {
	cout << "pick an option" << endl << "1. addition" << endl << "2. subtraction" << endl << "3. multiplication" << endl << "4. division" << endl;
	
}
void calculation() {

	int answer;
	cin >> answer;
	cout << "input two numbers to use in calculation" << endl;

	int total = 0;
	int input1;
	int input2;
	cin >> input1;
	cin >> input2;

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
		total = input1 % input2;
	}
	else {
		cout << "input valid number" << endl;
	}
	cout << total << endl;
}