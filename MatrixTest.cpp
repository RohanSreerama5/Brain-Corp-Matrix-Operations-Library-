
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <matrixop.h>
using namespace std;

typedef long long lld;

int main(){

		lld** matA;
	    matA = new lld*[2];
	    for (int i = 0; i < 2; i++)
	        matA[i] = new lld[3];
	    matA[0][0] = 7;
	    matA[0][1] = 2;
	    matA[0][2] = 3;
	    matA[1][0] = 3;
	    matA[1][1] = 5;
	    matA[1][2] = 4;

	    lld** matB;
	    matB = new lld*[3];
	    for (int i = 0; i < 3; i++)
	        matB[i] = new lld[2];
	    matB[0][0] = 6;
	    matB[0][1] = 8;
	    matB[1][0] = 3;
	    matB[1][1] = 11;
	    matB[2][0] = 9;
	    matB[2][1] = 12;

	    lld** matC = Strassen(matA, matB, 2, 3, 2);
	    for (int i = 0; i < 2; i++) {
	        for (int j = 0; j < 2; j++) {
	            printf("%lld ", matC[i][j]);
	        }
	        printf("\n");
	    }



	    return 0;
	}

/*
 * NOTES:
 * Matrix Multiplier:
 * Use Strassen(...) function. This function takes 5 arguments, namely, 2 input matrices, the number of rows in matA,
 * the numbr of rows in matB, and the number of rows in the output matrix.
 *
 *
 *
 *
 */



