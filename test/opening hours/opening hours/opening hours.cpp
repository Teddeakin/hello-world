#include <iostream>
#include <string>
using namespace std;

int main() {

	int time;
	cout << "what time is it on a 24 hour clock? " << endl;
	cin >> time;

	switch (time) {
	case 9:
	case 10:
	case 11:
		cout << "the store is open now";
		break;
	case 12:
		cout << "the staff are taking a lunch break so the store is closed for the hour";
		break;
	case 13:
	case 14:
	case 15:
	case 16:
	case 17:
	case 18:
		cout << "the store is still open";
		break;
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 19:
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
		cout << "the store is not open at this time";
		break;
	default:
		cout << "invalid time was inputed";
	}

}
