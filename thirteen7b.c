//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE 100
//
//int main(int argc, char *argv[])
//{
//	FILE *fp1, *fp2;
//	char ch1;
//	char ch2;
//	char st[SIZE];
//
//	if ((fp1 = fopen(argv[1], "r")) == NULL)
//	{
//		printf("Can't open %s", argv[1]);
//		exit(1);
//	}
//	if ((fp2 = fopen(argv[2], "r")) == NULL)
//	{
//		printf("Can't open %s", argv[2]);
//		exit(1);
//	}
//	do
//	{
//		while ((ch1 = getc(fp1)) != EOF && ch1 != '\n')
//		{
//			putchar(ch1);
//		}
//		while ((ch2 = getc(fp2)) != EOF && ch2 != '\n')
//		{
//			putchar(ch2);
//		}
//		putchar('\n');
//	} while (ch1 != EOF || ch2 != EOF);
//
//	fclose(fp1);
//	fclose(fp2);
//
//	return 0;
//}