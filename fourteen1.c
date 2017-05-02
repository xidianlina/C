//#include<stdio.h>
//#include<string.h>
//#include<ctype.h>
//#include "month.h"
//
//#define SIZE 20
//
//int get_days(char* p);
//
//int main(void)
//{
//	char input[SIZE];
//	int daytotal;
//
//	printf("Enter the name of a month: ");
//	while (gets(input) != NULL && input[0] != '\0')
//	{
//		daytotal = get_days(input);
//		if (daytotal > 0)
//			printf("There are %d days through %s.\n", daytotal, input);
//		else
//			printf("%s is not valid input.\n", input);
//		printf("Next month (empty line to quit): ");
//	}
//	puts("bye");
//
//	return 0;
//}
//
//int get_days(char* p)
//{
//	int i = 0, total = 0;
//	while (p[i] != '\0')
//	{
//		p[i] = tolower(p[i]);
//		i++;
//	}
//
//	for (i = 0; i<12; i++)
//	{
//		total += months[i].days;
//		if (strcmp(p, months[i].name) == 0)
//			return total;
//	}
//
//	return -1;
//}