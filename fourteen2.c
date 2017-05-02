//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "month.h"
//
//int get_days(int day, int month, int year);
//int leapyear(int year);
//
//int main(void)
//{
//	int day = 1, mon = 12, year = 1, total;
//
//	printf("Enter the number of day,month,year: ");
//	while (scanf("%d%d%d", &day, &mon, &year) == 3)
//	{
//		total = get_days(day, mon, year);
//		if (total > 0)
//			printf("There are %d days.\n", total);
//		else
//			printf("day %d month %d year %d is not valid input.\n", day, mon, year);
//		printf("Next day month year (empty line to quit): ");
//	}
//	puts("Bye.");
//
//	return 0;
//}
//
//int get_days(int day, int month, int year)
//{
//	int i, total;
//
//	if (leapyear(year))
//		months[1].days = 29;
//	else
//		months[1].days = 28;
//	if (month < 1 || month>12 || day<1 || day>months[month - 1].days)
//		return -1;
//	else
//	{
//		for (i = 0, total = 0; i < month - 1; i++)
//			total += months[i].days;
//		return total + day;
//	}
//}
//
//int leapyear(int year)
//{
//	if (year % 400)
//		return 1;
//	else if (year % 100 != 0 && year % 4 == 0)
//		return 1;
//	else
//		return 0;
//}