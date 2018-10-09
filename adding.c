#include <stdio.h>
int main()
{
	int firstNumber, secondNumber, sumOfTwoNumbers;

	printf("Enter two integers: ");

	// Two integers entered by user is stored using scanf() function
	scanf("%d %d", &firstNumber, & secondNumber);

	// Sum of the two numbers stored in variable sumOfTwoNumbers
	sumOfTwoNumbers = firstNumber + secondNumber;

	// Display sum
	printf("%d + %d = %d", firstNumber, secondNumber, sumOfTwoNumbers);

	return 0;
}
