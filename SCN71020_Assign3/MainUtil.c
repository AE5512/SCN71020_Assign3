#include "MainUtil.h"

char* gameFunction(char* player1input, char* player2input) {
	if (player1input == player2input) { //draw
		return "Draw";
	}
	else if (
		(player1input == "rock" && player2input == "scissors") ||
		(player1input == "paper" && player2input == "rock") ||
		(player1input == "scissors" && player2input == "paper")	
		) {
		return "Player1";
	}
	else if (
		(player2input == "rock" && player1input == "scissors") ||
		(player2input == "paper" && player1input == "rock") ||
		(player2input == "scissors" && player1input == "paper")
		) {
		return "Player2";
	}
		
	else {
		return "Invalid";
	}

}