//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//double mypower(double, int);
//int main(void)
//{
//	double base;
//	int exp;
//	double res;
//	
//	puts("Please enter double and integer :");
//	scanf("%lf%d", &base,&exp);
//	if (exp > 0)
//		res = mypower(base, exp);
//	else if (exp < 0)
//		res = 1 / mypower(base, -exp);
//	else if (base != 0)
//		res = 1;
//	else
//		res = 0;
//	printf("res is %lf\n", res);
//
//	return 0;
//}
//
//double mypower(double base, int exp)
//{
//	double res;
//	int i;
//
//	for (i = 0, res = 1; i < exp; i++)
//	{
//		res *= base;
//	}
//	
//	return res;
//}