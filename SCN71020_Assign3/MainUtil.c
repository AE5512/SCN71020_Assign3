#include "MainUtil.h"

char* gameFunction(char* player1input, char* player2input) {
	if (player1input == player2input) { //draw
		return "Draw";
	}
	else if (player1input == "rock") { //player 1 picks rock
		if (player2input == "scissors") {
			return "Player1";
		}
		else if (player2input == "paper") {
			return "Player2";
		}
	}
	else if (player1input == "paper") { //player 1 picks paper
			if (player2input == "rock") {
				return "Player1";
			}
			else if (player2input == "scissors") {
				return "Player2";
			}
	}
	else if (player1input == "scissors") { //player 1 picks scissors
		if (player2input == "paper") {
			return "Player1";
		}
		else if (player2input == "rock") {
			return "Player2";
		}
	}
	else {
		return "Invalid";
	}

}

