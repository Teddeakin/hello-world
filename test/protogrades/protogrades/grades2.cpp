#include <iostream>
#include <string>
using namespace std;

int main() {

	string name;
	int mark;
	int grade = 0;

	cout << "please input name " << endl; //displaying a prompt for the users name
	cin >> name; // taking the input of the user
	cout << "please input your mark" << endl;
	cin >> mark; // taking the input of the user

	if (mark > -1 && mark < 39) { // if statment to convert the possible range of "marks" into a set interger for the switch statement to use
		grade ++; // adding 1 to "grade" for the upcoming case
	}
	else if (mark > 40 && mark < 49 ){
		grade += 2;
	}
	else if (mark > 50 && mark < 59) {
		grade += 3;
	}
	else if (mark > 60 && mark < 69) {
		grade += 4;
	}
	else if (mark > 70 && mark < 79) {
		grade += 5;
	}
	else if (mark > 80 && mark < 101) {
		grade += 6;
	}

	switch (grade) {
	case 1: // uses the "grade" variable assigned during the if statement
		cout << name << " your grade is F"; // displaying the users name and grade
		break; // ending the switch statement so that the next "case" isn't also used
	case 2:
		cout << name << " your grade is E";
		break;
	case 3:
		cout << name << " your grade is D";
		break;
	case 4:
		cout << name << " your grade is C";
		break;
	case 5:
		cout << name << " your grade is B";
		break;
	case 6:
		cout << name << " your grade is A";
		break;
	default: // the default repsonce if 0 - 100 is not inputted by user
		cout << "invalid mark";
	}
}