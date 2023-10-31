#include <iostream>
#include <string> 
using namespace std;

int main() {

	int drink;
	cout << "here is the menu of drink available:\n1: Coffee | 2: Tea | 3: Cola | 4: Beer" << endl;
	cin >> drink;

	switch (drink) {
	case 1:
		cout << "your Coffee will be delivered shortly";
		break;
	case 2:
		cout << "your Tea will be delivered shortly";
		break;
	case 3:
		cout << "your Cola will be delivered shortly";
		break;
	case 4:
		cout << "your Beer will be delivered shortly";
		break;
	default:
		cout << "sorry we don't have that item on the menu.";
	}



}