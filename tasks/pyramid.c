#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

	int size = atoi(argv[1]);
	int i, j;
	for(i = 1; i <= size; i++) {
		for(j = 1; j <= (size-i); j++) {
			printf(" ");
		}
		for(j = 1; j <= i; j++) {
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}
