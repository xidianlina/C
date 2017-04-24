//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//double power(double, int);
//int main(void)
//{
//	double x;
//	int exp;
//
//	printf("input the base number and the exponent\n");
//	while (scanf("%lf %d", &x, &exp) == 2)
//	{
//		printf("%.3g to the power %d is %.5g\n", x, exp, power(x, exp));
//		printf("input the base number and the exponent\n");
//	}
//
//	return 0;
//}
//
//double power(double x, int exp)
//{
//	int i;
//	double pow = 1;
//	if (exp > 0)
//	{
//		for (i = 1; i <= exp; i++)
//		{
//			pow *= x;
//		}
//	}
//	else if (exp < 0)
//	{
//		for (i = 1; i <= exp; i++)
//		{
//			pow /= x;
//		}
//	}
//	else if (x != 0)
//	{
//		pow = 1;
//	}
//	else
//	{
//		pow = 1 / x;
//	}
//
//	return pow;
//}