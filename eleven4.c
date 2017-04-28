//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <ctype.h>
//#define SIZE 81
//void word(char *,int);
//int main(void)
//{
//	char str[SIZE];
//	int n;
//
//	printf("Enter the number of char :");
//	scanf("%d", &n);
//	puts("Enter string :");	
//	gets(str);
//	word(str,n);
//	puts(str);
//
//	return 0;
//}
//
//void word(char *str,int n)
//{
//	int begin, num=0;
//
//	for (begin = 0; isspace(*(str + begin)); begin++)
//		continue;	
//	while (num<n)
//	{
//		if (isspace(*(str + begin)))
//			break;
//		*str = *(str + begin);
//		str++;
//		num++;
//	}
//		
//	*(str) = '\0';
//}