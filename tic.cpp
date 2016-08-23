#include <iostream>
#include <string>
using namespace std;
char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int player = 'X';

void Draw() {

	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

void Input () {

	int a;
	cout << endl;
	cout << "Please select the numbered slot you wish to cover: ";
	cin >> a;

	switch (a) {
		case 1: matrix[0][0] = player;
			break;
		case 2: matrix[0][1] = player;
			break;
		case 3: matrix[0][2] = player;
			break;
		case 4: matrix[1][0] = player;
			break;
		case 5: matrix[1][1] = player;
			break;
		case 6: matrix[1][2] = player;
			break;
		case 7: matrix[2][0] = player;
			break;
		case 8: matrix[2][1] = player;
			break;
		case 9: matrix[2][2] = player;
			break;
	}
}

int Win() {

	char temp = 'o';
	
	//first case, if the whole top row is all equal ^^^
	if ((matrix[0][0] == matrix[0][1]) && (matrix[0][0] == matrix[0][2])) {
		temp = matrix[0][0];
		cout << temp << " is the *********WINNER!***********" << endl;
		return 0;
	}

	//second case, if the far left column is all equal :
	if ((matrix[0][0] == matrix[1][0]) && (matrix[1][0] == matrix[2][0])) {
		temp = matrix[0][0];
		cout << temp << " is the *********WINNER!***********" << endl;
		return 0;
	}

	//third case, if the top to bottom left to right diagonal is all equal
	if ((matrix[0][0] == matrix[1][1]) && (matrix[1][1] == matrix[2][2])) {
		temp = matrix[0][0];
		cout << temp << " is the *********WINNER!***********" << endl;
		return 0;
	}

	//fourth case, if the second column is all equal :	
	if ((matrix[0][1] == matrix[1][1]) && (matrix[1][1] == matrix[2][1])) {
		temp = matrix[0][1];
		cout << temp << " is the *********WINNER!***********" << endl;
		return 0;
	}
	
	//fifth case, if the top to bottom right to left diagonal are all equal
	if ((matrix[0][2] == matrix[1][1]) && (matrix[1][1] == matrix[2][0])) {
		temp = matrix[0][2];
		cout << temp << " is the *********WINNER!***********" << endl;
		return 0;
	}

	//sixth case, if thefar right column is all equal
	if ((matrix[0][2] == matrix[1][2]) && (matrix[1][2] == matrix[2][2])) {
		temp = matrix[0][2];
		cout << temp << " is the *********WINNER!***********" << endl;
		return 0;
	}

	//seventh case, if the second row is all equal ^^^
	if ((matrix[1][0] == matrix[1][1]) && (matrix[1][1] == matrix[1][2])) {
		temp = matrix[1][0];
		cout << temp << " is the *********WINNER!***********" << endl;
		return 0;
	}

	//eighth case, if the third row is all equal ^^^
	if ((matrix[2][0] == matrix[2][1]) && (matrix[2][1] == matrix[2][2])) {
		temp = matrix[2][0];
		cout << temp << " is the *********WINNER!***********" << endl;
		return 0;
	}
	return 1;
}

void TogglePlayer () {

	if (player == 'X') player = 'O';
	else player = 'X';
}

int main() {

	cout << endl << endl;
	cout << " \t==========================================" << endl;
	cout << "\t||	Let's play Tic Tac Toe!		||" << endl;
	cout << "\t==========================================" << endl;
	cout << "This is a two player game. Player 1 goes first, and will be Xs. Player 2 goes second and will be Os." << endl << endl;

	//the first thing we see is a normal board.
	Draw();
	cout << endl << "Player 1 goes first.";
	int play = 1;
	while (play) {

		Input();
		play = Win();
	
		if (play == 1) {
			cout << endl << "Next player:" << endl << endl;
			Draw();
			cout << endl;
			TogglePlayer();
		}
		else if (play == 0) {
			cout << "Congratulations!" <<endl;
		}
	}

	return 0;
}
