//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define BASIC 10.00;
//#define TIME 40
//#define ADD 1.5
//#define LIMIT1 300
//#define RATE1 0.15
//#define LIMIT2 150
//#define RATE2 0.20
//#define RATE3 0.25
//int main(void)
//{
//	double hours, gross, tax;
//	printf("input the work hours of a week:");
//	scanf("%lf", &hours);
//	if (hours > 40)
//	{
//		hours = 40 + (hours - 40)*1.5;
//	}
//	gross = hours*BASIC;
//	printf("gross income:\t\t%lf\n", gross);
//	if (gross <= LIMIT1)
//	{
//		tax = gross*RATE1;
//	}
//	else if (gross <= LIMIT2)
//	{
//		tax = LIMIT1*RATE1 + (gross - LIMIT1)*RATE2;
//	}
//	else
//	{
//		tax = LIMIT1*RATE1 + LIMIT2*RATE2 + (gross - LIMIT1 - LIMIT2)*RATE3;
//	}
//	printf("tax:\t\t\t%lf\n", tax);
//	printf("net income:\t\t%lf\n", gross - tax);
//
//	return 0;
//}