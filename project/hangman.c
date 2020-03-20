#include <stdio.h>

void initialize_game() {

	

}

void main() {

	//Create default values of gaming
	char phrase[4];
	int attempts = 10;
	char letter;

//	initialize_game();

	printf("Insert the phrase: ");
	scanf("%[^\n]", phrase);

	printf("\n\nThe phrase is: %s\n", phrase);

}
