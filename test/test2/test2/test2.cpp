#include <iostream>
#include <string>
using namespace std;

int main() {

	char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	int a[] = { 1, 3, 5, 7, 9 };
	int interger[] = { 10, 15, 25, 35, 50, 75 };
	int value[] = { 10, 88, 4, 21, 345, 99, 17 };
	int odd[101];

	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << ", ";
		if (i == 25) {
			cout << endl << endl;
		}
	}
	for (int i = 13; i < 26; i++) {
		cout << alphabet[i] << ", ";
		if (i == 25) {
			cout << endl << endl;
		}
	}
	for (int i = 0; i < 5; i++) {
		int reverse = 4 - i;
		cout << a[reverse] << ", ";
		if (i == 4) {
			cout << endl << endl;
		}
	}
	int total = 0;

	for (int i = 0; i < 6; i++) {
		total = total + interger[i];
		if (i == 5) {
			int sum = total / (i + 1);
			cout << sum << endl << endl;
		}
	}
	int total2 = 100;
	for (int i = 0; i < 6; i++) {
		if (total < value[i]) {
			total = value[i];
		}
		if (total2 > value[i]) {
			total2 = value[i];
		}
		if (i == 5) {
			cout << "lowest value: " << total2 << endl;
			cout << "highest value: " << total << endl << endl;
		}
	}
	for (int i = 0; i < 101; i++) {
		odd[i] = i;
	}
	for (int i = 0; i < 101; i++) {
		if (odd[i] % 2 != 0) {
			cout << odd[i] << ", ";
		}
	}
}