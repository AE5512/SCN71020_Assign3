#include <stdio.h>
#include "MainUtil.h"
#include <string.h>

char* gameFunction(char* player1input, char* player2input) {
	if (strcmp(player1input, player2input) == 0) {
		return "Draw";
	}
	else if (
		(strcmp(player1input, "rock") == 0 && strcmp(player2input, "scissors") == 0) ||
		(strcmp(player1input, "paper") == 0 && strcmp(player2input, "rock") == 0) ||
		(strcmp(player1input, "scissors") == 0 && strcmp(player2input, "paper") == 0)
		) {
		return "Player1";
	}
	else if (
		(strcmp(player2input, "rock") == 0 && strcmp(player1input, "scissors") == 0) ||
		(strcmp(player2input, "paper") == 0 && strcmp(player1input, "rock") == 0) ||
		(strcmp(player2input, "scissors") == 0 && strcmp(player1input, "paper") == 0)
		) {
		return "Player2";
	}	
	else {
		return "Invalid";
	}
}

void printInterface(char* input, int playerNum) {
	printf("Player %d, please Select Rock, paper, or Scissors: ", playerNum);
	scanf_s("%s", input, 16);
	_strlwr_s(input, 16);

}