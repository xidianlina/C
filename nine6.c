//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//void change(double*, double*, double*);
//int main(void)
//{
//	double x, y, z;
//
//	printf("enter three numbers\n");
//	scanf("%lf %lf %lf", &x, &y, &z);
//	change(&x, &y, &z);
//	printf("%lf %lf %lf\n", x, y, z);
//
//	return 0;
//}
//
//void change(double *x, double *y, double *z)
//{
//	double max, mid, min;
//	
//	max = *x > *y ? *x : *y;
//	max = max > *z ? max : *z;
//	min = *x > *y ? *y : *x;
//	min = min > *z ? *z : min;
//	if (max == *x)
//	{
//		if (min == *y)
//		{
//			mid = *z;
//		}
//		else
//		{
//			mid = *y;
//		}
//	}
//	else if (max == *y)
//	{
//		if (min = *x)
//		{
//			mid = *z;
//		}
//		else
//		{
//			mid = *x;
//		}
//	}
//	else
//	{
//		if (min == *y)
//		{
//			mid = *x;
//		}
//		else
//		{
//			mid = *y;
//		}
//	}
//	*x = min;
//	*y = mid;
//	*z = max;
//}