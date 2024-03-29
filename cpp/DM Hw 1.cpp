
#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define TOP 30

void print(int set[]);
int Exist(int set[], int s);

int main()
{
	int a = 0;
	int set1[TOP];
	int set2[TOP];
	int Result[TOP];
	int hold, index;
	int input;
	bool Done = false;

	set1[0] = set2[0] = Result[0] = 0;

	printf("------------------------------------------\n");
	printf("Welcome to Set Operations by Kevin Diaz!!-\n");
	printf("------------------------------------------\n");

	while (Done != true)
	{
		printf("\n<Press Any Key Continue>");
		_getch();
		system ("cls");		// The C equivalent is clrscr() in conio.h
		printf("Please choose which operation you wish to do.\n");
		printf("\n1) Create the sets.");
		printf("\n2) Print set.");
		printf("\n3) A intersection B.");
		printf("\n4) A - B");
		printf("\n5) A Symmetic Difference B = (A-B)U(B-A).");
		printf("\n6) Exit\n\n");
		printf("\nEnter Your Choice : ");
		scanf_s("%d", &input);
		printf("\n\n");
		switch (input)
		{
		case 1: printf("\nCreate Set A: ");
			set1[0] = 0;
			printf("\nNumber of elements in the set : ");
			scanf_s("%d", &hold);
			printf("\nEnter set elements : \n");
			for (index = 1; index <= hold; index++)
				scanf_s("%d", &set1[index]);
			set1[0] = hold;

			printf("\nCreate Set B: ");
			set2[0] = 0;
			printf("\nNumber of elements in the set : ");
			scanf_s("%d", &hold);
			printf("\nEnter set elements : \n");
			for (index = 1; index <= hold; index++)
				scanf_s("%d", &set2[index]);
			set2[0] = hold;
			break;

		case 2: printf("\nSet A:\n");
			print(set1);
			printf("\n\nSet B:\n");
			print(set2);
			break;

		case 3:

			Result[0] = 0;
			hold = set1[0];
			for (index = 1; index <= hold; index++)
				if (Exist(set2, set1[index]))
					Result[++Result[0]] = set1[index];
			if (Result[a] == 0) printf("There is no content");
			else print(Result);
			break;

		case 4: 
			hold = set1[0];
			Result[0] = 0;
			for (index = 1; index <= hold; index++)
				if (!Exist(set2, set1[index]))
					Result[++Result[0]] = set1[index];
			print(Result);
			break;

		case 5:
			hold = set1[0];
			Result[0] = 0;
			for (index = 1; index <= hold; index++)
				if (!Exist(set2, set1[index]))
					Result[++Result[0]] = set1[index];

			hold = set2[0];
			for (index = 1; index <= hold; index++)
				if (!Exist(set1, set2[index]))
					Result[++Result[0]] = set2[index];
			print(Result);
			break;

		case 6:
			Done = true;
			break;

		default:
			printf("\nPlease Enter a valid input\n");
			break;
		}

	} 
}

void  print(int set[])
{
	int index, hold;
	hold = set[0];
	printf("\nSet contents :--> ");
	for (index = 1; index <= hold; index++)
		printf("%d  ", set[index]);
}

int Exist(int set[], int s)
{
	int index, hold;
	hold = set[0];
	for (index = 1; index <= hold; index++)
		if (s == set[index])
			return(1);
	return(0);
}


