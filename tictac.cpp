#include <iostream>
#include <string>
using namespace std;

void print1 ();
void print2 ();
void print3 ();
void print4 ();
void print5 ();
void print6 ();
void print7 ();
void print8 ();
void print9 ();

int main() {

	char user;

	cout << endl << endl;
	cout << "====================================" << endl;
	cout << "||	Let's play Tic Tac Toe!		||" << endl;
	cout << "====================================" << endl;
	cout << endl << endl;

	cout << "Would you like to be X or O?" << endl;

	while (!(user == 'x' || user == 'o' || user == 'X' || user == 'O')) {
		cout << "Please only enter 'x', 'X', 'o', or 'O': ";
		cin >> user;
	}

	if (user == 'x' || user == 'X') {

		int the_play;
		cout << endl << endl << endl;
		cout << "Great! Here is the board." << endl;
		cout << endl << endl << endl;		
		cout << "		||	||	" << endl;
		cout << "	1	|| 2	|| 3	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	4	|| 5	|| 6	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	7	|| 8	|| 9	" << endl;
		cout << "		||	||	" << endl;
		cout << endl << endl << endl;
		cout << "Please select a numbered slot to play: ";
		cin >> the_play;

		switch (the_play) {

		case 1: print1();
			break;
		case 2: print2();
			break;
		case 3: print3();
			break;
		case 4: print4();
			break;
		case 5: print5();
			break;
		case 6: print6();
			break;
		case 7: print7();
			break;
		case 8: print8();
			break;
		case 9: print9();
			break;

		}

	}

	return 0;

}

void print1 () {

		cout << "		||	||	" << endl;
		cout << "	X	|| 2	|| 3	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	4	|| 5	|| 6	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	7	|| 8	|| 9	" << endl;
		cout << "		||	||	" << endl;
		cout << endl << endl << endl;

}

void print2 () {

		cout << "		||	||	" << endl;
		cout << "	1	|| X	|| 3	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	4	|| 5	|| 6	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	7	|| 8	|| 9	" << endl;
		cout << "		||	||	" << endl;
		cout << endl << endl << endl;

}

void print3 () {

		cout << "		||	||	" << endl;
		cout << "	1	|| 2	|| X	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	4	|| 5	|| 6	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	7	|| 8	|| 9	" << endl;
		cout << "		||	||	" << endl;
		cout << endl << endl << endl;

}

void print4 () {

		cout << "		||	||	" << endl;
		cout << "	1	|| 2	|| 3	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	X	|| 5	|| 6	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	7	|| 8	|| 9	" << endl;
		cout << "		||	||	" << endl;
		cout << endl << endl << endl;

}

void print5 () {

		cout << "		||	||	" << endl;
		cout << "	1	|| 2	|| 3	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	4	|| X	|| 6	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	7	|| 8	|| 9	" << endl;
		cout << "		||	||	" << endl;
		cout << endl << endl << endl;

}

void print6 () {

		cout << "		||	||	" << endl;
		cout << "	1	|| 2	|| 3	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	4	|| 5	|| X	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	7	|| 8	|| 9	" << endl;
		cout << "		||	||	" << endl;
		cout << endl << endl << endl;

}

void print7 () {

		cout << "		||	||	" << endl;
		cout << "	1	|| 2	|| 3	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	4	|| 5	|| 6	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	X	|| 8	|| 9	" << endl;
		cout << "		||	||	" << endl;
		cout << endl << endl << endl;

}

void print8 () {

		cout << "		||	||	" << endl;
		cout << "	1	|| 2	|| 3	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	4	|| 5	|| 6	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	7	|| X	|| 9	" << endl;
		cout << "		||	||	" << endl;
		cout << endl << endl << endl;
}

void print9 () {

		cout << "		||	||	" << endl;
		cout << "	1	|| 2	|| 3	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	4	|| 5	|| 6	" << endl;
		cout << "		||	||	" << endl;
		cout << "	===========================" << endl;
		cout << "		||	||	" << endl;
		cout << "	7	|| 8	|| X	" << endl;
		cout << "		||	||	" << endl;
		cout << endl << endl << endl;

}

