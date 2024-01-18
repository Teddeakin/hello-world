#include<iostream>
#include<string>
#include<fstream>

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

struct money {
	int total;
};

int menu();


int main(){
	int order;
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
	int catagory = menu();

	for (int i = 0; i < 14; i++) {
		if (catagory == 1) {
			if (item[i].catagory == 1) {
				if (item[i].stock < 1) {
					cout << item[i].code << ": " << item[i].name << " OUT OFF STOCK!!!" << endl;
				}
				else {
					cout << item[i].code << ": " << item[i].name << " " << item[i].price << endl;
					item[i].stock--;
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
					item[i].stock--;
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
					item[i].stock--;
				}
			}
		}
	}

	cin >> order;

}

int menu() {
	int ID;
	catagories menu[3]{
	{"cold drinks"},
	{"hot drinks"},
	{"Snacks"}
	};
	cout << "MENU" << endl << "===========" << endl << endl;
	for (int i = 0; i < 3; i++) {
		cout << i + 1 << ": " << menu[i].name << endl;
	}
	cin >> ID;
	cout << endl;
	return ID;
}