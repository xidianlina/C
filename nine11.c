#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long Fibonacci(int);
int main(void)
{
	int n;

	printf("Enter an integer (q to quit)\n");
	while (scanf("%d", &n) == 1)
	{
		printf("The term %d of Fibonacci sequence is %d\n", n, Fibonacci(n));
		printf("Enter an integer (q to quit)\n");
	}
	printf("Done.\n");

	return 0;
}

long Fibonacci(int n)
{
	int res, pre, temp, i;
	if (n > 2)
	{
		for (pre = 1, res = 1, i = 3; i <= n; i++)
		{
			temp = res + pre;
			pre = res;
			res = temp;
		}
	}
	else
	{
		res = 1;
	}

	return res;
}