#include <iostream>
#include<cstdlib>
using namespace std;

int rock(int shoot) {
	if (shoot == 1) {
		cout << "DRAW" << endl;
	}
	else if (shoot == 2) {
		cout << "WINNER" << endl;
		int win = 1;
		return win;
	}
	else if (shoot == 3) {
		cout << "LOSER" << endl;
		int win = 0;
		return win;
	}
}

int paper(int shoot) {
	if (shoot == 1) {
		cout << "LOSER" << endl;
		int win = 2;
		return win;
	}
	else if (shoot == 2) {
		cout << "DRAW" << endl;
		int win = 0;
		return win;
	}
	else if (shoot == 3) {
		cout << "WINNER" << endl;
		int win = 1;
		return win;
	}
}

int scissors(int shoot) {
	if (shoot == 1) {
		cout << "WINNER" << endl;
		int win = 1;
		return win;
	}
	else if (shoot == 2) {
		cout << "LOSER" << endl;
		int win = 2;
		return win;
	}
	else if (shoot == 3) {
		cout << "DRAW" << endl;
		int win = 0;
		return win;
	}
}

int main() {


	srand((unsigned)time(NULL));

	int shoot = 1;
	int player = 0;
	int comp = 0;

	while (player < 3 )
	{

		int random = 1 + rand() % 3;

		cout << "1: rock" << endl << "2: paper" << endl << "3: scissors" << endl;
		cin >> shoot;

		if (random == 1) {
			rock(shoot);
			int returnwin = rock(shoot);
			if (returnwin == 1) {
				player++;
			}
			else if (returnwin == 2) {
				comp++;
			}
		}

		if (random == 2) {
			paper(shoot);
			int returnwin = paper(shoot);
			if (returnwin == 1) {
				player++;
			}
			else if (returnwin == 2) {
				comp++;
			}
		}

		if (random == 3) {
			scissors(shoot);
			int returnwin = scissors(shoot);
			if (returnwin == 1) {
				player++;
			}
			else if (returnwin == 2) {
				comp++;
			}
		}
		cout << "score: " << player << " / " << comp << endl;
		if (comp == 3) {
			cout << "YOU LOST" << endl;
			return 0;
		}
	}

	if (player == 3) {
		cout << endl << endl <<  "YOU WIN" << endl;
	}
	return 0;

}