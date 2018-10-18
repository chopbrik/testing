#include <stdio.h>
#include <stdlib.h>

int whileSum (int numbers[], int length);
int fourSome (int numbers[], int length);
int recurSum (int numbers[], int length);
int recurSumores (int sumbers[], int length, int sum);

int main()
{
	int numbers[5] = {5,10,15,20,25};
	int length = sizeof numbers / sizeof *numbers;
	printf("whileSum = %i\n", whileSum(numbers, length));
	printf("fourSome = %i\n", fourSome(numbers, length));
	printf("recurSum = %i\n", recurSum(numbers, length));
}

int whileSum (int numbers[], int length)
{
	int i = 0;
	int sum = 0;
	while (i < length)	
	{
		sum += numbers[i++];
	}
	return sum;
}

int fourSome (int numbers[], int length) 
{
	int sum = 0;
	for(int i=0; i<length; i++)
	{
		sum += numbers[i];
	}
	return sum;
}

int recurSumores (int numbers[], int length, int sum)
{
	if (length == 0)
	{
		return sum;
	}
	sum += numbers[length - 1];
	recurSumores(numbers, --length, sum);
}

int recurSum (int numbers[], int length)
{
	int sum = 0;
	sum = recurSumores(numbers, length, sum);
	return sum;
}
