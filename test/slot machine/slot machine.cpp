#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main() {

	int credits = 10;
	
	srand(time(0));
		for (int i = 10; i > 0; i--) {
			char answer;
			int random1 = 1 + rand() % 10;
			int random2 = 1 + rand() % 10;
			int random3 = 1 + rand() % 10;

			cout << "you have " << i << " credits left" << endl;
			cout << "s to spin, q to quit" << endl;
			cin >> answer;

			if (answer == 'q') {
				return 0;
			}

			cout <<  random1 << " " << random2 << " " << random3 << " " << endl << endl;

			if (random1 == random2 == random3) {
				cout << "----TRIPLE MATCH----  +  2 credits" << endl << endl;
				i += 2;
				break;
			}
			else if (random1 == random2 || random1 == random3 || random2 == random3) {
				cout << "----MATCH----  +  1 credits" << endl << endl;
				i += 1;
			}
		}
		

	cout << "your out of credits" << endl;
	return 0;
}