//#include <stdio.h>
//#include <ctype.h>
//int main(void)
//{
//	int word = 0;
//	int upper = 0;
//	int lower = 0;
//	int punct = 0;
//	int digit = 0;
//	_Bool flag = 0;
//	char ch;
//
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))
//		{
//			if (flag == 0)
//			{
//				word++;
//				flag = 1;
//			}
//		}
//		else
//		{
//			flag = 0;
//		}
//		if (isupper(ch))
//			upper++;
//		if (islower(ch))
//			lower++;
//		if (ispunct(ch))
//			punct++;
//		if (isdigit(ch))
//			digit++;
//	}
//	printf("word:%d\nupper:%d\nlower:%d\npunct:%d\ndigit:%d\n", 
//		word, upper, lower, punct, digit);
//
//	return 0;
//}