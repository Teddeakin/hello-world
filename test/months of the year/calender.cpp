#include <iostream>
#include <string>
using namespace std;

int main() {

	int input = 0;
	string month[12] = { "january", "febuary", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december" };

	cout << "enter a number from 1 - 12" << endl;
	cin >> input;

	if (input > 12) {
		cout << "invalid input";
	}
	else if (input < 1) {
		cout << "invalid input";
	}
	else {
		input--;
			cout << month[input];
	}

}