/*ANSWER和try实际上是指针，因此比较式try!=ANSWER并不检查这两个字符串是否一样，
而是检查这两个字符串的地址是否一样*/
//#include <stdio.h>
//#define ANSWER "Grant"
//int main(void)
//{
//	char try[40];
//
//	puts("Who is buried in Grant's tomb?");
//	gets(try);
//	while (try != ANSWER)
//	{
//		puts("No,that's wrong.Try again.");
//		gets(try);
//	}
//	puts("That's right!");
//
//	return 0;
//}