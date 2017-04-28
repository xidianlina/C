//#include <stdio.h>
//#include <stdlib.h>
//#include <ctype.h>
//#include "getstr.h"
//int myatoi(char *p);
//int main(void)
//{
//	char a[30] = { 0 };
//	while (a[0] != 'q')
//	{
//		puts("input a integer :");
//		mygets(a,30);
//		printf("atoi: %d\n", atoi(a));
//		printf("myatoi: %d\n", myatoi(a));
//		printf("difference:%d\n", atoi(a) - myatoi(a));
//		puts("input any char except q to go on.");
//		mygets(a,30);
//	}
//	puts("Quit.");
//	return 0;
//}
//
//int myatoi(char *p)
//{
//	int n = 0;
//	while (1)
//	{
//		if (isdigit(*p))
//			n = n * 10 + (*p) - '0';
//		else
//			break;
//		p++;
//	}
//
//	return n;
//}