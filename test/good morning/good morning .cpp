#include <iostream>
#include <string>
using namespace std;

 int main() {

	int current_time = 3;

	if (current_time >= 12) {

		cout << "it is PM";
	}

	else if (current_time < 12) {

		cout << "it is AM";
	}

	else {

		cout << "invalid time";
	}
}