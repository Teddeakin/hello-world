#include<iostream>
#include<string>
#include<fstream>

using namespace std;

struct product {
	string name;
	double price;
	int catagory;
	int stock;
};

struct catagories {
	string name;
};

struct money {
	int total;
};

int menu();


int main(){
	int count = 1;
	product item[3]{
	{"coke", 1.50, 1, 2},
	{"hot chocolate", 1, 2, 2},
	{"fanta", 1.50, 1, 2}
	};
	int catagory = menu();

	for (int i = 0; i < 3; i++) {
		if (item[i].stock < 1) {

			break;
		}
		if (item[i].catagory == 1) {
			cout << count++ << item[i].name << endl;
			item[i].stock--;
		}
		else if (item[i].catagory == 2) {
			cout << count++ << item[i].name << endl;
			item[i].stock--;
		}
		else if (item[i].catagory == 3) {
			cout << count++ << item[i].name << endl;
			item[i].stock--;
		}
		else if (item[i].catagory == 4) {
			cout << count++ << item[i].name << endl;
			item[i].stock--;
		}
	}
}

int menu() {
	int ID;
	catagories menu[2]{
	{"cold drinks"},
	{"hot drinks"}
	};
	cout << "MENU" << endl << "===========" << endl << endl;
	for (int i = 0; i < 2; i++) {
		cout << i + 1 << ": " << menu[i].name << endl;
	}
	cin >> ID;
	return ID;
}

