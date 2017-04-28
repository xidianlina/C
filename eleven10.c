//#include <stdio.h>
//#include "getstr.h"
//#define SIZE 81
//void del_space(char *);
//int main(void)
//{
//	char str[SIZE];
//
//	while (mygets(str, 81))
//	{
//		puts(str);
//		del_space(str);
//		puts(str);
//	}
//
//	return 0;
//}
//
//void del_space(char *str)
//{
//	char *p;
//	while (*str != '\0')
//	{
//		if (*str == ' ')
//		{
//			p = str;
//			while (*p != '\0')
//			{
//				*p = *(p + 1);
//				p++;
//			}
//			str--;
//		}
//		str++;
//	}
//}