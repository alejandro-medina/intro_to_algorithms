#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void main(int argc, char** argv){
    
    int rows, columns;

	if(argc-1 == 1) { // quiere decir que pidió cantidad de filas
		rows = atoi(argv[1]);
        columns = atoi(argv[1]);
	} else {
        printf("¿De qué tamaño quieres tu matriz cuadrada? ");
        scanf("%d", &rows);
        columns = rows;
    }


    srand(time(NULL));
    
    int matrixA[rows][columns]; // = matrixA[10][10];
    int matrixB[rows][columns]; // matrixB[5][5];
    int matrixC[rows][columns];

    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            matrixA[i][j] = (rand() % 90) + 10;
            matrixB[i][j] = (rand() % 90) + 10;
        }
    }

    // Imprimir matrix A
    printf("Matrix A: \n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf(" %d ", matrixA[i][j]);
        }
        printf("\n");
    }

    // Imprimir matrix B
    printf("\nMatrix B: \n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf(" %d ", matrixB[i][j]);
        }
        printf("\n");
    }

    // hacer la multiplicacion de A * B
    // usar la formula como en el enlace: 
    // https://datachant.com/wp-content/uploads/2016/06/screenshot_121.png
    
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {

            int value = 0, k; // el valor de matrix C en ij

            for(k = 0; k < rows; k++) {
                value = value + (matrixA[i][k] * matrixB[k][j]);
            }
            matrixC[i][j] = value;
             
        }
    }

    // Imprimir matrix resultando
    printf("\nResult of multuplication (C): \n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf(" %d ", matrixC[i][j]);
        }
        printf("\n");
    }


}