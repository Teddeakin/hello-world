#include <iostream>
#include <string>
using namespace std;

int main() {

	double age;

	cout << "enter your age " << endl;
	cin >> age;

	while (cin.fail()) {
		cout << "invalid input.\nPlease enter a valid age:" << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		cin >> age;
	}
	while (age < 0 || age > 120) {
		cout << "invalid input. \nPlease enter a reasonable age:" << endl;
		cin.clear();
		cin >> age;

	}

	while (age > 0) {
		age-= 0.5;
		cout << age << endl;

	}
}