// DM Hw 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define TOP 20

int matrix[TOP][TOP];

int main() {
	int Medge;
	int X;
	int Y;
	int degree;
	int input;

	printf("\nEnter number of nodes : ");
	scanf_s("%d", &input);
	Medge = input * (input - 1);

	for (int count = 1; count <= Medge; count++) {
		printf("Enter edge #%d, enter '0 0' to quit : ", count);
		scanf_s("%d %d", &X, &Y);

		if ((X == 0) && (Y == 0)) break;

		if (X > input || Y > input || X <= 0 || Y <= 0) {
			printf("Invalid edge!\n");
			count--;
		}
		else {
			matrix[X][Y] = 1;
			matrix[Y][X] = 1;
		}

	}
	printf("\n");

	for (int y = 1; y <= input; y++) {
		degree = 0;
		for (int x = 1; x <= input; x++) {
			printf("%4d", matrix[y][x]);
			if (matrix[y][x] == 1)
				degree += 1;
		}
		printf("   Degrees of %d: %d", y, degree);
		printf("\n");
	}
	printf("\n");

	return 0;
}