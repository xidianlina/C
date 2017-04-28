//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#define ANSWER "GRANT"
//#define SIZE 40
//char *s_gets(char *, int);
//void ToUpper(char *);
//int main(void)
//{
//	char try[SIZE];
//
//	puts("Who is buried in Grant's tomb?");
//	s_gets(try, SIZE);
//	ToUpper(try);
//	while (strcmp(try, ANSWER) != 0)
//	{
//		puts("No,that's wrong.Try again.");
//		s_gets(try, SIZE);
//		ToUpper(try);
//	}
//	puts("That's right!");
//
//	return 0;
//}
//
//char *s_gets(char *str, int n)
//{
//	char *ret_val;
//	ret_val = fgets(str, n, stdin);
//	if (ret_val)
//	{
//		while (*str != '\n'&&*str != '\0')
//			str++;
//		if (*str == '\n')
//			*str = '\0';
//		else
//			while(getchar() != '\n')
//				continue;
//	}
//
//	return ret_val;
//}
//
//void ToUpper(char *str)
//{
//	while (*str != '\0')
//	{
//		*str = toupper(*str);
//		str++;
//	}	
//}