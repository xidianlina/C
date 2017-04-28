//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define SIZE 81
//char *mystrncpy(char *, char *, int);
//char *mygets(char *, int);
//int main(void)
//{
//	char str1[SIZE];
//	char str2[SIZE];
//	int n;
//
//	do
//	{
//		puts("Enter string1 :");
//		mygets(str1,SIZE);
//		puts("Enter string2 :");
//		mygets(str2,SIZE);
//		puts("Enter the number of copying char :");
//		scanf("%d", &n);
//		getchar();
//		puts("After copying :");
//		puts(mystrncpy(str1, str2, n));
//		puts("Enter char q to quit ");
//		mygets(str1,SIZE);
//	} while (*str1 != 'q');
//	puts("Bye!");
//
//	return 0;
//}
//
//char *mystrncpy(char *str1, char *str2, int n)
//{
//	char *ret = str1;
//
//	while (*str1++ != '\0')
//		continue;
//	*--str1 = *str2;
//	n--;
//	while (n > 0 && *str2 != '\0')
//	{
//		*++str1 = *++str2;
//		n--;
//	}
//
//	return ret;
//}
//
//char *mygets(char *str, int n)
//{
//	char *ret_val;
//	
//	ret_val = fgets(str, n, stdin);
//	if (ret_val)
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
//	return ret_val;
//}