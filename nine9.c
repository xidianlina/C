//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//double power(double, int);
//double get_res(double,int);
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
//	double pow = 1;
//	if (exp > 0)
//	{
//		pow = get_res(x, exp);
//	}
//	else if (exp < 0)
//	{
//		pow = 1/get_res(x, exp);
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
//
//double get_res(double x, int exp)
//{
//	if (exp == 1)
//	{
//		return x;
//	}
//	return x*get_res(x, exp - 1);
//}