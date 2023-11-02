#include <iostream>
#include <string>
using namespace std;

int main() {


	int number;

	cout << "please enter the number 1 or 2" << endl;
	cin >> number;

	while (number == 1 || number == 2) {

		if (number == 1) {
			cout << "you have entered the number 1" << endl;
			break;
		}
		else {
			cout << "you have entered the number 2" << endl;
			break;
		}


	}


}