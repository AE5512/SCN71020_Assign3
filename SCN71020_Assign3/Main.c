#include <stdio.h>
#include "MainUtil.h"



int main(void) {
	char* player1 = "paper";
	char* player2 = "rock";

	char* result = gameFunction(player1, player2);

	printf("%s", result);
}