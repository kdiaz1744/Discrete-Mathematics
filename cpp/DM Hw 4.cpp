// DM Hw 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>

//-----------------------------------------------------------------|
// Solution to problem:											   |
// The time complexity function was declared to be the amount of   |
//times "sum=sum+1" is called in the function. As a hint, we were  |
//told to use "log_2()", and by viewing the results given by both, |
//I could see that the result function was "C = log_2(n)".		   |
// Ps. The resulting funtion is without considering the "floor()"  |
//function.										   |
//-----------------------------------------------------------------|

int main()
{

	int n=1;

	while (n != -1) {
		printf("Please input n: ");
		scanf_s("%d", &n);

		int i = n;
		int sum = 0;

		while (i > 0) {
			sum = sum + 1;
			i = floor(i / 2);
		}
		printf("Amount of times entered: %d\n\n", sum);
	}

    return 0;
}

