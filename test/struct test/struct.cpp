#include<iostream>
#include<string>
#include<fstream>

using namespace std;
struct drinks {
	string name[3] = { "coke", "sprite", "water"};
	double price = 1.2;
}coke, sprite, water;

void catagories() {
	cout << "MENU" << endl << "=======" << endl << endl;
	cout << "1. drinks" << endl;
	cout << "2. crisps" << endl;
	cout << "3. chocolate" << endl;

}

void drinks() {
	cout << endl << "1. " <<  coke.name[0] << "(" << coke.price << ") " << "2. " << sprite.name[1] << "(" << sprite.price << ") " << "3. " << water.name[2] << "(" << water.price << ")" << endl;

}

int main() {
	int user;
	int total = 0;
	catagories();
	cin >> user;

	if (user == 1) {
		drinks();
	}
	double total1 = total + coke.price;
	cout << total1;

}