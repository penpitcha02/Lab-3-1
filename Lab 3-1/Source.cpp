#include<stdio.h>
int main()
{
	int number, sum = 0,summ = 0;
	printf("Enter number: ");
	scanf_s("%d", &number);
	while (number > 0)
	{
		sum = sum + (number % 10);
		number = number/10;
	}
	if (sum >= 10)
	{
		while (sum > 0)
		{
			summ = summ + (sum % 10);
			sum = sum/10;
		}
		printf("Sum : %d", summ);
	}
	else 
	{
		printf("Sum : %d", sum);
	}
	return 0;
}