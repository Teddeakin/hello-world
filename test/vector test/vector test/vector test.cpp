#include <iostream>
#include <vector>

using namespace std;

int main() {

	int a = 0;
	vector<char> alphabet = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

	for (int i = 0; i < 26; i++) {
		cout << alphabet[i] << ", ";
	}
	cout << "press any key to continue" << endl;
	cin >> a;
	vector<int> odd;
	system("cls");


}