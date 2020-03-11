// c program to illustrate strings
#include <stdio.h>

void printString(char str[]) {

	printf("The string provided is: %s\n", str);

}

void main(){

	// Declare and initialize a string
	char name[] = "Alejandro";

	// Print the string
	printf("%s\n", name);


	// PART II. Read and print a string
	char lastname[50];
	printf("Insert your lastname: ");
	scanf("%s", lastname);

	printf("You inserted: %s\n", lastname);

	// Pass string as an argument

	printString(name);
	printString(lastname);

}
