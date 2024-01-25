#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

using namespace std;

struct product {
	string name;
	double price;
	int catagory;
	int stock;
	int code;
};

struct catagories {
	string name;
};

int menu();

int recommendation(int order, product);

int main() {
	int order;
	double total = 0;
	int count = 0;
	product item[13]{
	{"coke", 1.50, 1, 2, 301},
	{"fanta", 1.50, 1, 2, 302},
	{"sprite", 1.50, 1, 2, 303},
	{"lucozade", 2.00, 1, 1, 304},
	{"Water", 1, 1, 5, 305},
	{"hot chocolate", 1.20, 2, 2, 306},
	{"Coffee", 2.5, 2, 4, 307},
	{"Tea", 2.2, 2, 4, 308},
	{"Crunchie", 0.8, 3, 2, 309},
	{"Aero", 1.2, 3, 2, 310},
	{"Brunch bar", 0.5, 3, 2, 311},
	{"Walkers", 1, 3, 2, 312},
	{"Haribo starmix", 1.2, 3, 2, 313}
	};

	while (count == 0) {


		int catagory = menu(); // need to add function if they don't input valid number

		if (catagory == 4) {
			break;
		}

		for (int i = 0; i < 14; i++) {
			if (catagory == 1) {
				if (item[i].catagory == 1) {
					if (item[i].stock < 1) {
						cout << item[i].code << ": " << item[i].name << " OUT OFF STOCK!!!" << endl; // put this into another file?
					}
					else {
						cout << item[i].code << ": " << item[i].name << " " << item[i].price << endl;
					}
				}
			}
			if (catagory == 2) {
				if (item[i].catagory == 2) {
					if (item[i].stock < 1) {
						cout << item[i].code << ": " << item[i].name << " OUT OFF STOCK!!!" << endl;
					}
					else {
						cout << item[i].code << ": " << item[i].name << " " << item[i].price << endl;
					}
				}
			}
			if (catagory == 3) {
				if (item[i].catagory == 3) {
					if (item[i].stock < 1) {
						cout << item[i].code << ": " << item[i].name << " OUT OFF STOCK!!!" << endl;
					}
					else {
						cout << item[i].code << ": " << item[i].name << " " << item[i].price << endl;
					}
				}
			}
		}

		cin >> order;
		for (int a = 0; a < 14; a++) { // put this into a function
			if (order == item[a].code && item[a].stock < 1) {
				cout << "ITEM OUT OFF STOCK!" << endl << endl;
			}
			else if (order == item[a].code) {
				cout << "DISPENCING " << item[a].name << endl;
				total = total + item[a].price;
				cout << "TOTAL: " << total << endl << endl;
				item[a].stock--;
				recommendation(item[a].catagory, item[13]);
			}
		}
	}

	double user_credits = 0; // put this into a function
	while (user_credits < total) {
		total = total - user_credits;
		cout << "TOTAL OWED: " << total << endl;
		cout << "Please input credits" << endl;
		cin >> user_credits;
		if (user_credits > total) {
			user_credits = user_credits - total;
			cout << "change: " << user_credits << endl;
			break;
		}
	}
}

int menu() {
	int ID;
	catagories menu[4]{
	{"cold drinks"},
	{"hot drinks"},
	{"Snacks"},
	{"EXIT"}
	};
	cout << "MENU" << endl << "===========" << endl << endl;
	for (int i = 0; i < 4; i++) {
		cout << i + 1 << ": " << menu[i].name << endl;
	}
	cin >> ID;
	cout << endl;
	return ID;
}

int recommendation(int order, product item) {
	srand(time(0));
	int counter = 0;
	for (int a = 0; a < 14; a++) {
		product item[13];
		if (order == item[a].catagory) {
			counter++; // make this correct
		}
	}
	int random = 1 + rand() % counter;
	return random;
}