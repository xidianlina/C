//#include <stdio.h>
//#include "gets.h"
//#define SIZE 16
//
//int bin_to_int(char *);
//
//int main(void)
//{
//	char pbin[SIZE];
//
//	puts("Enter binary string: ");
//	s_gets(pbin, SIZE);
//	printf("Binary string %s to int is %d\n", pbin, bin_to_int(pbin));
//
//	return 0;
//}
//
//int bin_to_int(char *pbin)
//{
//	int res = 0;
//	
//	while (*pbin)
//		res = (res << 1) + (*pbin++ - '0');
//	
//	return res;
//}