//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "gets.h"
//#include "month.h"
//
//extern struct month months[];
//
//int get_days(int);
//
//int main(void)
//{
//	int num;
//
//	puts("Please enter the number for month :");
//	while (scanf("%d",&num)==1)
//	{
//		if (get_days(num) == 0)
//			printf("The month name is wrong.\n");
//		else
//		{
//			printf("The days until %d is %d\n", num, get_days(num));
//			printf("Next enter (empty line to quit):\n");
//		}
//	}
//	printf("Bye.\n");
//
//	return 0;
//}
//
//int get_days(int month)
//{
//	int index, total;
//
//	if (month < 1 || month>12)
//		return(-1);
//	else
//	{
//		for (index = 0, total = 0; index < month; index++)
//			total += months[index].days;
//		return(total);
//	}
//}