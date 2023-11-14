#include <iostream>
#include <string>
using namespace std;

int main() {

	string sname[5];
	string name[5];
	cout << "enter 5 names and include last names" << endl;

	for (int i = 0; i < 5; i++) {
		cin >> name[i];
		cin >> sname[i];

	}

	for (int j = 0; j < 5; j++) {
		cout << j + 1<< ". " << name[j] << " " << sname[j] << endl;

	}
}