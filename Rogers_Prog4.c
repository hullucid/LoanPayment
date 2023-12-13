#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int months; // declarations 
	float loanAmount, monthlyPayment, loanBalance;
	int i = 1;
	
	//asking user for the loan amount 
	printf ("Enter the loan amount: ");
	scanf ("%f" , &loanAmount);
	
	//asking use for the monthly payment amount 
	printf ("Enter the monthly payment: ");
	scanf ("%f" , &monthlyPayment);
	
	//formula for calculating months
	months = loanAmount/monthlyPayment;
	printf ("It will take approximately %d months \n" , months);
	
	//loop for printing the balance each time a monthly payment is made 	
	while (loanAmount != 0 )
	{
		
		loanBalance = loanAmount - monthlyPayment;
		printf("After %d monthly payment \n", i);
		printf ("Your balance is currently %f \n" , loanBalance);	
		loanAmount = loanBalance;
		i++;
	}
	//users loan has been paid off 
	printf ("Congrats you have paid off your loan!");
	
	system("pause");
	
	return 0;
}
