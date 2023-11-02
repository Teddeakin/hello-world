#include <iostream>
#include <string>
using namespace std;

int main() {

	int count = 10;
	
	do {
		if (count % 2 == 0) {
			cout << count << " is even" << endl;
			count--;
		}
		else {
			cout << count << " is odd" << endl;
			count--;
		}

	} while (count > - 1);
	
		cout << "we have lift off";
}