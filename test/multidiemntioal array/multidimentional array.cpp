#include <iostream>
#include <string>
using namespace std;

int main() {

	int user[3][3];

	cout << "please input 9 numbers to fill the array" << endl;
	
	for (int i = 0; i < 3; i++) {
		cin >> user[0][i];
	}
	for (int j = 0; j < 3; j++) {
		cin >> user[1][j];
	}
	for (int k = 0; k < 3; k++) {
		cin >> user[2][k];
	}

	for (int q = 0; q < 3; q++) {
		for (int w = 0; w < 3; w++) {
			cout << user[q][w] << ", ";
		}
		cout << endl; 
	}

	cout << "row 1 total = " << user[0][0] + user[0][1] + user[0][2] << endl;
	cout << "row 2 total = " << user[1][0] + user[1][1] + user[1][2] << endl;
	cout << "row 3 total = " << user[2][0] + user[2][1] + user[2][2] << endl;

	cout << "column 1 total = " << user[0][0] + user[1][0] + user[2][0] << endl;
	cout << "column 2 total = " << user[0][1] + user[1][1] + user[2][1] << endl;
	cout << "column 3 total = " << user[0][2] + user[1][2] + user[2][2] << endl;

	for (int e = 0; e < 3; e++) {
		for (int r = 0; r < 3; r++) {
			if (user[0][0] < user[e][r]) {
				user[0][0] = user[e][r];
			}
		}
	}

	cout << "highest value in the array = " << user[0][0];
}