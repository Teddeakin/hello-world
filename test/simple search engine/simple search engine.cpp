#include <iostream>
#include <string>
using namespace std;

int main() {

	string search[6] = { "Ed", "John", "Sam", "Coral", "Ron", "Jake" };
	string input;

	cout << "who's name are you searching for? " << endl;
	for (int i = 0; i < 6; i++) {
		cout << search[i] << ", ";
	}
    cin >> input;
	
	for (int i = 0; i < 6; i++) {
		if (search[i] == input) {
			i++;
			cout << "the position of " << input << " is " << i << endl;
			break;
		}
		else if (i == 5) {
			cout << "please input valid name!";
		}
	}
	
}