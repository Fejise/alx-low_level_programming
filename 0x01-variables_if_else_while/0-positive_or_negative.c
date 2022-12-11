#include<stdio.h>
#include<stdlib.h>
#include<time.h>


/**
 *main - print if the number is positive,negetive or 0
 *Return: Always 0
 */

int main(void)
{
	int n;
	%rand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		print("%d is positive\n", n);
	}
	else if (n == 0)
	{
		print("%d is zero\n", n);
	}
	else
	{
		print("%d is negative\n", n);
	}
	return (0);
}
