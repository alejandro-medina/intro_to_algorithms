#include <stdio.h>
#include <stdlib.h>

float module(float a, float b){ return (int)a % (int)b; }
float add(float a, float b) { return a+b; }
float subtract(float a, float b){ return a-b; }
float multiply(float a, float b){ return a*b; }
float divide(float a, float b){ return a/b; }

void showExample(){

	printf("Example of use: \t$ ./a.out 4 + 3\n");
	printf("Outpul will be: \t>> 7\n");
	printf("\nList of operators: \n\n");
	printf("Multiplication -----> 'x'\n");
	printf("Division -----------> '/'\n");
	printf("Addition -----------> '+'\n");
	printf("Subtraction --------> '-'\n");
	printf("Module -------------> '%%'\n\n");

}

int main(int argc, char** argv){


	int arguments = argc-1;

	if(arguments == 0) {
		
		printf("\nInsert arguments to the program so it can do the calculations.\n");
		showExample();
		return 0;

	} else if(arguments < 3 || arguments > 3){

		printf("\nInsert three argument command line as in the example:\n\n");
		printf("Arguments should be the form: \t [number] [operator] [number]\n");
		showExample();
		return 0;
	} else {
		char symbol = (char)*argv[2];
		float a = atof(argv[1]);
		float b = atof(argv[3]);

		switch(symbol){
			case '+':
				printf("%.2f\n", add(a, b));
			break;
			case '-':
				printf("%.2f\n", subtract(a, b));
			break;
			case '/':
				printf("%.2f\n", divide(a, b));
			break;
			case '%':
				printf("%d MOD %d = %.2f\n", (int)a, (int)b, module(a, b));
			break;
			case 'x':
				printf("%.2f\n", multiply(a, b));
			break;
			default:
				printf("Unknown operator %c\n", symbol);
			break;
		}

	}

	return 0;

}
