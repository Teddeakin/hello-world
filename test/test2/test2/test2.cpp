#include <iostream>
#include <string>
using namespace std;

int main() {

	int score = 0; // data type to add a "score" for each question answered correctly
	string england; // variables for the users input on each question (could simplify this by erasing the users input after each question)
	string germany;
	string italy;
	string russia;
	string hungary;
	string france;
	string portugal;
	string czech;
	string scotland;
	string netherland;

	cout << "Welcome to the quiz on the 10 capital cities of europe!" << endl << "what is the capital city of England? "; // example text for each question to prompt the user to input an answer
	std::cin >> england; // the variable that stores the users answer 


	if (england == "London") { // If they inputted "London" then the next two lines of code will go through
		cout << "correct! " << endl; // displaying to the users that the inputted the correct answer
		score++; // adding a number to the score
	}

	else if (england == "london") { // if they didn't capitalise the answer the same sequence will also play as before

		cout << "correct! " << endl; // displaying to the user that they inputted the correct answer
		score++; // adding a number to the score
	}
	else { // if the user inputtes anything other than "London" or "london"
		cout << "incorrect " << endl; // displaying to the user they inputted the incorrect answer
	}

	cout << "What is the capital city of Germany? ";
	std::cin >> germany;

	if (germany == "Berlin") {
		cout << "correct! " << endl;;
		score++;
	}
	else if (germany == "berlin") {

		cout << "correct! " << endl;
		score++;
	}
	else {
		cout << "incorrect " << endl;
	}

	cout << "What is the capital city of Italy? ";
	std::cin >> italy;

	if (italy == "Rome") {
		cout << "correct! " << endl;
		score++;
	}

	else if (italy == "rome") {

		cout << "correct! " << endl;
		score++;
	}
	else {
		cout << "incorrect " << endl;
	}

	cout << "What is the capital city of Russia? ";
	std::cin >> russia;

	if (russia == "Moscow") {
		cout << "correct! " << endl;
		score++;
	}

	else if (russia == "moscow") {

		cout << "correct! " << endl;
		score++;
	}
	else {
		cout << "incorrect " << endl;
	}

	cout << "What is the capital city of Hungary? ";
	std::cin >> hungary;

	if (hungary == "Budapest") {
		cout << "correct! " << endl;
		score++;
	}

	else if (hungary == "budapest") {

		cout << "correct! " << endl;
		score++;
	}
	else {
		cout << "incorrect " << endl;
	}

	cout << "What is the capital city of France? ";
	std::cin >> france;

	if (france == "Paris") {
		cout << "correct! " << endl;
		score++;
	}

	else if (france == "paris") {

		cout << "correct! " << endl;
		score++;
	}
	else {
		cout << "incorrect " << endl;
	}

	cout << "What is the capital city of Portugal? ";
	std::cin >> portugal;

	if (portugal == "Libson") {
		cout << "correct! " << endl;
		score++;
	}

	else if (portugal == "libson") {

		cout << "correct! " << endl;
		score++;
	}
	else {
		cout << "incorrect " << endl;
	}

	cout << "What is the capital city of Czech Republic? ";
	std::cin >> czech;

	if (czech == "Prague") {
		cout << "correct! " << endl;
		score++;
	}

	else if (czech == "prague") {

		cout << "correct! " << endl;
		score++;
	}
	else {
		cout << "incorrect " << endl;
	}

	cout << "What is the capital city of Scotland? ";
	std::cin >> scotland;

	if (scotland == "Edinburgh") {
		cout << "correct! " << endl;
		score++;
	}

	else if (scotland == "edinburgh") {

		cout << "correct! " << endl;
		score++;
	}
	else {
		cout << "incorrect " << endl;
	}

	cout << "What is the capital city of the Netherlands? ";
	std::cin >> netherland;

	if (netherland == "Amsterdam") {
		cout << "correct! " << endl;
		score++;
	}

	else if (netherland == "amsterdam") {

		cout << "correct! " << endl;
		score++;
	}
	else {
		cout << "incorrect " << endl;
	}

	cout << "thank you for taking this quiz, your overall score was " << score; // after each if statement has been used it will display that it is the end of the quiz and the number of questions the user got correct
}