#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include"header.h"

using namespace std;

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
				recommendation(item[a].catagory, item);
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

