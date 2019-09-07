// DM Hw 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


float save(float fdeposit, float interest, int time);

int main()
{
	float Fdeposit;
	float Cdeposit;
	float AInterest;
	int time;

	
	printf("Please input your deposit: ");
	scanf_s("%f", &Fdeposit);
	printf("Please input your annual interest on saving: ");
	scanf_s("%f", &AInterest);
	printf("Please input the amount of years that pass: ");
	scanf_s("%d", &time);

	Cdeposit = Fdeposit;
	AInterest = ((AInterest / 100) / 12) + 1;
	time = time * 12;

	//Cdeposit = save(Fdeposit, AInterest, time);

	
	for (int i = 0; i < time; i++) {
		Cdeposit = (Fdeposit * AInterest) - Fdeposit + Cdeposit;
		printf("Month %d: %f\n", i + 1, Cdeposit);
	}
	

	printf("\nAfter %d year/s, your current savings are: %f\n", time / 12, Cdeposit);
	return 0;
}


float save(float fdeposit, float interest, int time) {

	int cdeposit = fdeposit;

	if (time != 0) {
		fdeposit = save(fdeposit, interest, time - 1);
		cdeposit = (fdeposit * interest);
	}
	return (cdeposit);

}