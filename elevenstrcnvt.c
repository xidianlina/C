//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	char num[30];
//	char *end;
//	long value;
//
//	puts("Enter a number (empty line to quit):");
//	while (gets(num) && num[0] != '\0')
//	{
//		value = strtol(num, &end, 10);
//		printf("value:%ld,stopped at %s (%d)\n", value, end, *end);
//		value = strtol(num, &end, 16);
//		printf("value:%ld,stopped at %s (%d)\n", value, end, *end);
//		puts("Next number:");
//	}
//	puts("Bye!\n");
//
//	return 0;
//}