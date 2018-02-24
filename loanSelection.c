#include <stdio.h>

int main(void) {
	int com_year,no_loan,salary,loan_amount;
	printf("Hom many years you working\n");
	scanf("%d\n",&com_year);
	printf("How many loans were you taked\n");
	scanf("%d\n",&no_loan);
	printf("enter your salary per month\n");
	scanf("%d\n",&salary);
	printf("Enter your wanted loan\n");
	scanf("%d\n",&loan_amount);
	if(com_year>=5)
	{
		if(no_loan==0)
		{
			if((salary*3)>loan_amount)
			{
				printf("Your loan is selected");
			}
			else
			{
				printf("Your loan is not selected");
			}
		}
			else
			{
				printf("Your loan is not selected");
			}
	}
		else
			{
				printf("Your loan is not selected");
			}
	return 0;
}
