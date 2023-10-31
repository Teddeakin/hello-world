#include <iostream>
#include <string>
using namespace std;

int main() {

	char answer;
	char n = 'n';
	char N = 'N';

	do {
		cout << "are we there yet ? " << endl << "Y or N" << endl;
		cin >> answer;

	} while (answer == n || answer == N);



	cout << "we are here" << endl;

}