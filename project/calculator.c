#include <stdio.h>
#include <stdlib.h>

float modulo(float a, float b){

	return (int)a % (int)b;
}

float sumar(float a, float b) {
	return a+b;
}

float restar(float a, float b){
	return a-b;
}

float multiplicar(float a, float b){
	return a*b;
}

float dividir(float a, float b){
	return a/b;
}


void main(int argc, char** argv){

	char symbol = *argv[1];
	float a = atof(argv[2]);
	float b = atof(argv[3]);

	switch(symbol){
		case '+':
			printf("%.2f\n", sumar(a, b));
		break;
		case '-':
			printf("%.2f\n", restar(a, b));
		break;
		case '/':
			printf("%.2f\n", dividir(a, b));
		break;
		case '%':
			printf("%d MOD %d = %.2f\n", (int)a, (int)b, modulo(a, b));
		break;
		case 'x':
			printf("%.2f\n", multiplicar(a, b));
		break;
		default:
			printf("Operador no conocido\n");
		break;
	}

}
