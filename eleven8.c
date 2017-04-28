//#include <stdio.h>
//char *string_in(char *, char *);
//char *mygets(char *, int);
//int main(void)
//{
//	char str1[81];
//	char str2[21];
//	char *p;
//	
//	do
//	{
//		puts("Enter range string :");
//		mygets(str1, 81);
//		puts("Enter match string :");
//		mygets(str2, 21);
//		p = string_in(str1, str2);
//		if (p)
//		{
//			puts("find!");
//			printf("%p\n",p);
//		}
//		else
//		{
//			puts("can not  find!");
//		}
//		puts("Enter char q to quit");
//		mygets(str1,81);
//	} while (*str1 != 'q');
//	puts("Quit");
//
//	return 0;
//}
//
//char *string_in(char *p1, char *p2)
//{
//	char *p1_save = p1, *p2_save = p2;
//
//	if (*p1 == '\0' || *p2 == '\0')
//		return NULL;
//	while (1)
//	{
//		if (*p1 == *p2)
//		{
//			if (*++p2 == '\0')
//				return p1_save;
//			if (*++p1 == '\0')
//				return NULL;
//		}
//		else
//		{
//			if (*++p1 == '\0')
//				return NULL;
//			p1_save = p1;
//			p2 = p2_save;
//		}
//	}
//}
//
//char *mygets(char *str, int n)
//{
//	char *ret;
//
//	ret = fgets(str, n, stdin);
//	if (ret)
//	{
//		while (*str != '\n'&&*str != '\0')
//			str++;
//		if (*str == '\n')
//			*str = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	
//	return ret;
//}