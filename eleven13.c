//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#include "getstr.h"
//#define SIZE 81
//int main(int argc,char *argv[])
//{
//	char str[SIZE];
//	char *p,temp;
//	int i, n, len;
//
//	mygets(str,SIZE);
//	for (p = str, i = 0, n = strlen(str); i < n / 2; i++)
//	{
//		temp = *(p + n - i - 1);
//		*(p + n - i - 1) = *(p + i);
//		*(p + i) = temp;
//	}
//	puts(str);
//
//	p = str;
//	len = 0;
//	do
//	{
//		if (isalpha(*p))
//		{
//			len++;
//		}
//		else
//		{
//			if (len > 1)
//			{
//				for (i = 0; i < len / 2; i++)
//				{
//					temp = *(p - i - 1);
//					*(p - i - 1) = *(p - len + i);
//					*(p - len + i) = temp;
//				}
//			}
//			len = 0;
//		}
//	} while (*p++ != '\0');
//	puts(str);
//
//	return 0;
//}