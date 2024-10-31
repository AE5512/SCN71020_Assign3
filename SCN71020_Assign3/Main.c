#include <stdio.h>
#include "MainUtil.h"
#include <string.h>



int main(void) {
	char player1Selected[16] = {0};
	char player2Selected[16] = {0};

	printInterface(player1Selected, 1);
	printInterface(player2Selected, 2);

	char* result = gameFunction(player1Selected, player2Selected);

	printf("result: %s\n", result);
}
