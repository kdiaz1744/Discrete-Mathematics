// DM Hw 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define TOP 30


int main()
{
	int A[TOP];
	int B[TOP];
	int C[TOP];
	int fx[TOP];
	int fy[TOP];
	int gx[TOP];
	int gy[TOP];
	int fogx[TOP];
	int fogy[TOP];
	int gofx[TOP];
	int gofy[TOP];
	int check;
	int count = 1;
	int hold;

	A[0] = B[0] = C[0] = fx[0] = fy[0] = gx[0] = gy[0] =
		gofx[0] = gofy[0] = fogx[0] = fogy[0] = 0;

	//---Creating sets area

	printf("Please enter size for A: ");
	scanf_s("%d", &hold);
	printf("Please enter elements for A: \n");
	for (int index = 1; index <= hold; index++)
		scanf_s("%d", &A[index]);
	A[0] = hold;

	printf("Please enter size for B: ");
	scanf_s("%d", &hold);
	printf("Please enter elements for B: \n");
	for (int index = 1; index <= hold; index++)
		scanf_s("%d", &B[index]);
	B[0] = hold;

	printf("Please enter size for C: ");
	scanf_s("%d", &hold);
	printf("Please enter elements for C: \n");
	for (int index = 1; index <= hold; index++)
		scanf_s("%d", &C[index]);
	C[0] = hold;
	//--------------
	
	printf("\nNow forming the functions... \n");

	//--- Forming functions area

	//--- THIS WILL BE FUNCTION f
	printf("Function of f: \n\n");

	hold = A[0];
	fx[0] = fy[0] = hold;
	check = B[0];

	for (int index = 1; index <= hold; index++) {
		fx[index] = A[index];

		if (check == 0) {
			check = B[0];
			fy[index] = B[check];
			check--;
		}
		else {
			fy[index] = B[check];
			check--;
		}

		printf("(%d, ", fx[index]);
		printf("%d)\n", fy[index]);
	}
	//--- END FUNCTION f
	//---------------------------------
	//--- START FUNTION g
	printf("\nFunction of g: \n\n");
	
	hold = B[0];
	gx[0] = gy[0] = hold;
	check = C[0];

	for (int index = 1; index <= hold; index++) {
		gx[index] = B[index];

		if (check == 0) {
			check = C[0];
			gy[index] = C[check];
			check--;
		}
		else {
			gy[index] = C[check];
			check--;
		}

		printf("(%d, ", gx[index]);
		printf("%d)\n", gy[index]);
	}
	//--- END FUNCTION g

	printf("\n<Press Any Key To Continue To Next Part>");
	_getch();
	
	//--- START FUNCTION gof
	printf("\n\nFunction of gof:\n");

	hold = fx[0];
	gofx[0] = gofy[0] = 0;
	check = gy[0];

	for (int index = 1; index <= hold; index++) {
		gofx[index] = fx[index];

		if (check == 0) {
			check = gy[0];
			gofy[index] = gy[check];
			check--;
		}
		else {
			gofy[index] = gy[check];
			check--;
		}

		printf("(%d, ", gofx[index]);
		printf("%d)\n", gofy[index]);
	}
	//--- END FUNCTION gof

	printf("\n<Press Any Key To Continue To Next Part>");
	_getch();

	//--- START FUNCTION fog

	printf("\n\nFunction of fog:\n");

	hold = gx[0];
	fogx[0] = fogy[0] = 0;
	check = fy[0];

	for (int index = 1; index <= hold; index++) {
		fogx[index] = gx[index];

		if (check == 0) {
			check = fy[0];
			fogy[index] = fy[check];
			check--;
		}
		else {
			fogy[index] = fy[check];
			check--;
		}

		printf("(%d, ", fogx[index]);
		printf("%d)\n", fogy[index]);
	}


    return 0;
}

