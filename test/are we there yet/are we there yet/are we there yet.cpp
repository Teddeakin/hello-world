#include <iostream>
#include <string>
using namespace std;

int main() {

	char answer;
	char n = 'n';
	char N = 'N';
	char playgame;

	do {
		cout << "are we there yet ? " << endl << "Y or N" << endl;
		cin >> answer;

		if (answer == n) {
			cout << "do you want to play a game?" << endl << "Y or N" << endl;
		break;
		}
	} while (answer == n || answer == N);



	cout << "we are here" << endl;

}