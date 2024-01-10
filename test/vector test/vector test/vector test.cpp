#include<iostream>
#include<string>

using namespace std;

void menu();
double user_choice(int choice);

int main() {
	int choice;
	double user_money;


	cout << "How much money do you have on you right now in pounds?" << endl;
	cin >> user_money;

	menu();
	cout << "what food or drink would you like?" << endl;
	cin >> choice;
	user_choice(choice);

	double payments = user_choice(choice);

}

void menu() {
	string menu[3][5] = {
		{"sprite", "coke", "fanta", "monster", "water"},
		{"twix", "mars", "crunchie", "aero", "brunch oats"},
		{"walkers", "mccoys", "sensations", "doritos", "monster munch"},
	};
	int count = 1;
	cout << "MENU:" << endl << "=============" << endl;
	for (int i = 0; i < 3; i++) {
		for (int a = 0; a < 5; a++) {
			cout << count << ": " << menu[i][a] << ", ";
			count++;
		}
		cout << endl;
	}
	cout << endl;
}

double user_choice(int choice) {
	double payment = 0.0;
	if (choice == 1) {
		cout << "DISPENCING SPRITE" << endl;
		payment = 1.20;
	}
	return payment;
}