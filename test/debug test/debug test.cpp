#include <iostream>
using namespace std;

int main() {

	string word = "Hello World";
	char letter;
	string convertedWorld;
	for (int i = 0; i < 11; i++) {
		letter = word[i];
		convertedWorld += tolower(word[i]);
		cout << convertedWorld << " current loop iteration is " << i + 1 << endl;
	}

	cout << convertedWorld << endl;

	return 0;
}