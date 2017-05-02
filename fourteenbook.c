//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include "gets.h"
//
//#define MAXTITL 41
//#define MAXAUTL 31
//
//char *s_gets(char *st, int n);
//
//struct book {
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	float value;
//};
//
//int main(void)
//{
//	struct book library;
//
//	printf("Please enter the book title.\n");
//	s_gets(library.title, MAXTITL);
//	printf("Now enter the author.\n");
//	s_gets(library.author, MAXAUTL);
//	printf("Now enter the value.\n");
//	scanf("%f", &library.value);
//	printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
//	printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);
//	printf("Done.\n");
//
//	return 0;
//}