//#include <stdio.h>
//#include <ctype.h>
//#define SIZE 81
//void word(char *);
//int main(void)
//{
//	char str[SIZE];
//
//	puts("Enter string :");
//	gets(str);
//	word(str);
//	puts(str);
//
//	return 0;
//}
//
//void word(char *str)
//{
//	int begin, end;
//
//	for (begin = 0; isspace(*(str + begin)); begin++)
//		continue;
//	for (end = begin; !isspace(*(str + end)); end++)
//		continue;
//	*(str + end) = '\0';
//	for (; *(str + begin) != '\0'; str++)
//		*str = *(str + begin);
//	*(str) = '\0';
//}