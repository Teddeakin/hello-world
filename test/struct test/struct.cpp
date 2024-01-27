#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<ctime>

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

void display(struct product item[], int catagory);

int main() {
	int order;
	double total = 0;
	int count = 0;
	product item[13]{
	{"coke", 1.50, 1, 2, 301},
	{"fanta", 1.50, 1, 2, 302},
	{"sprite", 1.50, 1, 2, 303},
	{"lucozade", 2.00, 1, 1, 304},
	{"Water", 1.0, 1, 5, 305},
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


		int catagory = menu();

		if (catagory == 4) {
			break;
		}

		display(item, catagory);

		while (!(cin >> order) || order > 313 || order <= 300) {
			cout << "please enter valid number" << endl;
			cin.clear(); // clears the previous input so that it can be repeated
			cin.ignore(123, '\n');
		}
		for (int a = 0; a < 14; a++) {
			if (order == item[a].code && item[a].stock < 1) {
				cout << "ITEM OUT OFF STOCK!" << endl << endl;
			}
			else if (order == item[a].code) {
				cout << "DISPENCING " << item[a].name << endl;
				total = total + item[a].price;
				cout << "TOTAL: " << total << endl << endl;
				item[a].stock--;
				srand(time(0));
				if (item[a].catagory == 1) {
					int random1 = rand() % 7;
					cout << "Based on your order we recommend " << item[random1 + 4].name << item[0].name << endl;
				}
				else if (item[a].catagory == 2) {
					int random2 = rand() % 1;
					cout << "Based on your order we recommend " << random2 << endl;
				}
				else if (item[a].catagory == 3) {
					int random3 = rand() % 5;
					cout << "Based on your order we recommend " << item[random3].name << endl;
				}
			}
		}
	}

	double user_credits = 0;
	while (user_credits < total) {
		total = total - user_credits;
		cout << "TOTAL OWED: " << total << endl;
		cout << "Please input credits" << endl;
		while (!(cin >> user_credits)) {
			cout << "please input valid change" << endl;
		}
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
	}while (!(cin >> ID) || ID > 4 || ID <= 0) {
		cout << "please enter valid number" << endl;
		cin.clear(); // clears the previous input so that it can be repeated
		cin.ignore(123, '\n');
	}
	cout << endl;
	return ID;
}

void display(struct product item[], int catagory) {
	for (int i = 0; i < 14; i++) {
		if (catagory == 1) {
			if (item[i].catagory == 1) {
				if (item[i].stock < 1) {
					cout << item[i].code << ": " << item[i].name << " OUT OFF STOCK!!!" << endl;
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
}