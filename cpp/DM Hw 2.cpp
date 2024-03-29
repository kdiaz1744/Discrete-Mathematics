/*
	~Since this code is meant to be re-used in the different equations,
here you will find the blocks of code to copy/paste for easy change.
a)
x = pow(-domain + 1, 2);
current = pow(-domain, 2);
prev = pow(-domain - 1, 2);

x = pow(index+1, 2);
current = pow(index, 2);
prev = pow(index-1, 2);
--------------------------------
b)
x = pow(2, -domain + 1);
current = pow(2, -domain);
prev = pow(2, -domain - 1);

x = pow(2, index + 1);
current = pow(2, index);
prev = pow(2, index - 1);
--------------------------------
c)
x = pow(-domain + 1, 3) - 2 * pow(-domain + 1, 2) - 5 * -domain + 1;
current = pow(-domain, 3) - 2 * pow(-domain, 2) - 5 * -domain;
prev = pow(-domain - 1, 3) - 2 * pow(-domain - 1, 2) - 5 * -domain - 1;

x = pow(index + 1, 3) - 2 * pow(index + 1, 2) - 5 * index + 1;
current = pow(index, 3) - 2 * pow(index, 2) - 5 * index;
prev = pow(index - 1, 3) - 2 * pow(index - 1, 2) - 5 * index - 1;
--------------------------------
d)
x = pow(-domain + 1, 3);
current = pow(-domain, 3);
prev = pow(-domain - 1, 3);

x = pow(index + 1, 3);
current = pow(index, 3);
prev = pow(index - 1, 3);

*/
// DM Hw 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define TOP 30

void printR(float arr[], bool one, bool ontor, int choice);
void printS(float set[]);

int main()
{
	float xarr[TOP];
	float x;
	float xi;
	int input;
	int choice;
	float index = 0;
	float domain = 10;
	float prev = 0;
	float current = 0;
	bool Done = false;
	bool one = true;
	bool onto1 = false;
	bool onto2 = false;
	bool ontor = false;
	bool sup;
	xarr[0] = 0;
	
	printf("-----------------------------------------------\n");
	printf("Welcome to Function Operations by Kevin Diaz!!-\n");
	printf("-----------------------------------------------\n");

	while (Done != true)
	{
		printf("\n<Press Any Key Continue>");
		_getch();
		system("cls");		// The C equivalent is clrscr() in conio.h
		printf("Please choose which operation you wish to do.\n");
		printf("\n1) Create the X set.");
		printf("\n2) Print X set.");
		printf("\n3) Function (a).");
		printf("\n4) Function (b).");
		printf("\n5) Function (c).");
		printf("\n6) Function (d).");
		printf("\n7) Exit.\n\n");
		printf("\nEnter Your Choice : ");
		scanf_s("%d", &choice);
		printf("\n\n");

		switch (choice)
		{
		case 1:
			printf("Please enter the amount of entries of X: ");
			scanf_s("%d", &input);
			printf("Please enter the elements of X: ");
			for (int i = 1; i <= input; i++) {
				scanf_s("%f", &xarr[i]);
			}
			xarr[0] = input;
			break;

		case 2: 
			printS(xarr);
			break;

		case 3:
			//-------LOCATION OF FUNCTION-------
			x = pow(-domain + 1, 2);
			current = pow(-domain, 2);
			prev = pow(-domain - 1, 2);
			//----------------------------------

			if (prev > current && current > x) sup = false;
			else sup = true;

			for (index = -domain; index <= domain; index++) {
				index = index - .9;
				//-------LOCATION OF FUNCTION-------
				x = pow(index + 1, 2);
				current = pow(index, 2);
				prev = pow(index - 1, 2);
				//----------------------------------

				if (sup == false) {	// This will be in charge of checking if it's not 1-1
					if (x > current || current > prev) one = false;
				}
				else {
					if (x < current || current < prev) one = false;
				}
				if (x < 0 || current < 0 || prev < 0) onto1 = true; // This part will check if it's Onto
				if (x > 0 || current > 0 || prev > 0) onto2 = true;
				if (onto1 == true && onto2 == true) ontor = true;
			}

			printR(xarr, one, ontor, choice);
			one = true;
			ontor = false;
			onto1 = false;
			onto2 = false;
			break;

		case 4:
			//-------LOCATION OF FUNCTION-------
			x = pow(2, -domain + 1);
			current = pow(2, -domain);
			prev = pow(2, -domain - 1);
			//----------------------------------

			if (prev > current && current > x) sup = false;
			else sup = true;

			for (index = -domain; index <= domain; index++) {
				index = index - .9;
				//-------LOCATION OF FUNCTION-------
				x = pow(2, index + 1);
				current = pow(2, index);
				prev = pow(2, index - 1);
				//----------------------------------

				if (sup == false) {	// This will be in charge of checking if it's not 1-1
					if (x > current || current > prev) one = false;
				}
				else {
					if (x < current || current < prev) one = false;
				}
				if (x < 0 || current < 0 || prev < 0) onto1 = true; // This part will check if it's Onto
				if (x > 0 || current > 0 || prev > 0) onto2 = true;
				if (onto1 == true && onto2 == true) ontor = true;
			}

			printR(xarr, one, ontor, choice);
			one = true;
			ontor = false;
			onto1 = false;
			onto2 = false;
			break;

		case 5:
			//-------LOCATION OF FUNCTION-------
			x = pow(-domain + 1, 3) - 2 * pow(-domain + 1, 2) - 5 * -domain + 1;
			current = pow(-domain, 3) - 2 * pow(-domain, 2) - 5 * -domain;
			prev = pow(-domain - 1, 3) - 2 * pow(-domain - 1, 2) - 5 * -domain - 1;
			//----------------------------------

			if (prev > current && current > x) sup = false;
			else sup = true;

			for (index = -domain; index <= domain; index++) {
				index = index - .9;
				//-------LOCATION OF FUNCTION-------
				x = pow(index + 1, 3) - 2 * pow(index + 1, 2) - 5 * index + 1;
				current = pow(index, 3) - 2 * pow(index, 2) - 5 * index;
				prev = pow(index - 1, 3) - 2 * pow(index - 1, 2) - 5 * index - 1;
				//----------------------------------

				if (sup == false) {	// This will be in charge of checking if it's not 1-1
					if (x > current || current > prev) one = false;
				}
				else {
					if (x < current || current < prev) one = false;
				}
				if (x < 0 || current < 0 || prev < 0) onto1 = true; // This part will check if it's Onto
				if (x > 0 || current > 0 || prev > 0) onto2 = true;
				if (onto1 == true && onto2 == true) ontor = true;
			}

			printR(xarr, one, ontor, choice);
			one = true;
			ontor = false;
			onto1 = false;
			onto2 = false;
			break;

		case 6:

			//-------LOCATION OF FUNCTION-------
			x = pow(-domain + 1, 3);
			current = pow(-domain, 3);
			prev = pow(-domain - 1, 3);
			//----------------------------------

			if (prev > current && current > x) sup = false;
			else sup = true;

			for (index = -domain; index <= domain; index++) {
				index = index - .9;
				//-------LOCATION OF FUNCTION-------
				x = pow(index + 1, 3);
				current = pow(index, 3);
				prev = pow(index - 1, 3);
				//----------------------------------

				if (sup == false) {	// This will be in charge of checking if it's not 1-1
					if (x > current || current > prev) one = false;
				}
				else {
					if (x < current || current < prev) one = false;
				}
				if (x < 0 || current < 0 || prev < 0) onto1 = true; // This part will check if it's Onto
				if (x > 0 || current > 0 || prev > 0) onto2 = true;
				if (onto1 == true && onto2 == true) ontor = true;
			}

			printR(xarr, one, ontor, choice);
			one = true;
			ontor = false;
			onto1 = false;
			onto2 = false;
			break;

		case 7:
			Done = true;
			break;

		default:
			printf("\nPlease Enter a valid input\n");
			break;
		}

	}


	return 0;
}

void printR(float arr[], bool one, bool ontor, int choice) {
	int size;
	size = arr[0];
	float y;

	printf("These are the results!\n\n");
	printf("X		Y\n");
	printf("---------------------------------\n");
	
	for (int index = 1; index <= size; index++) {
		printf("%f		", arr[index]);

		if (choice == 3) y = pow(arr[index], 2);
		if (choice == 4) y = pow(2, arr[index]);
		if (choice == 5) y = pow(arr[index], 3) - 2 * pow(arr[index], 2) - 5 * arr[index];
		if (choice == 6) y = pow(arr[index], 3);

		printf("%f\n", y);
	}

	printf("\n");

	if (one == false) printf("not 1-1\n");
	else printf("yes 1-1\n");
	if (ontor == true) printf("yes Onto\n");
	else printf("not Onto\n");

}


void  printS(float set[])
{
	int index, hold;
	hold = set[0];
	printf("\nContents of set X :--> ");
	for (index = 1; index <= hold; index++)
		printf("%f  ", set[index]);
}