#include"header.h"
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;
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

void recommendation(int order, product item[]) {
	srand(time(0));
	if (order == 1) {
		int random1 = rand() % 7;
		cout << "Based on your order we recommend " << item[random1 + 4].name << endl;
	}
	else if (order == 2) {
		int random2 = rand() % 4;
		cout << "Based on your order we recommend " << item[random2 + 8].name << endl;
	}
	else if (order == 3) {
		int random3 = rand() % 4;
		cout << "Based on your order we recommend " << item[random3 + 8].name << endl;
	}
}