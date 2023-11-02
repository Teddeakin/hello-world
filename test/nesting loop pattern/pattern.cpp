#include <iostream>
#include <string>
using namespace std;

int main() {

	for (int a=0; a<3; a++) {
		for (int b=0; b<5; b++) {
			cout << "-";
		}
		cout << endl;
		for (int c = 0; c < 5; c++) {
			cout << "*";
		}
		cout << endl;
	}

}