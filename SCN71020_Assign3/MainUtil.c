#include "MainUtil.h"

char* gameFunction(char* player1input, char* player2input) {
	if (player1input == player2input) {
		return "Draw";
	}
	else if (player1input == "rock"){
		if (player2input == "scissors") {
			return "Player1";
		}
		else if (player2input == "paper") {
			return "Player2";
		}
	else if (player1input == "paper") {
			if (player2input == "rock") {
				return "Player1";
			}
			else if (player2input == "scissors") {
				return "Player2";
			}
	else if (player1input == "scissors") {
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

