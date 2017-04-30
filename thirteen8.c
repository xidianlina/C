//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char *argv[])
//{
//	int i;
//	char ch;
//	FILE *fp;
//	int cnt = 0;
//
//	if (argc < 2)
//	{
//		fprintf(stderr, "The number of arguments is wrong.");
//		exit(EXIT_FAILURE);
//	}
//
//	if (argc == 2)
//	{
//		printf("Please enter some texts:\n");
//		while ((ch = getchar()) != EOF)
//			if (ch == argv[1][0])
//				cnt++;
//		printf("the \"%s\" in your input: %d times.", argv[1], cnt);
//	}
//	else
//	{
//		for (i = 2; i < argc; i++)
//		{
//			cnt = 0;
//			if ((fp = fopen(argv[i], "r")) == NULL)
//			{
//				fprintf(stderr, "Could not open the %s.", argv[i]);
//				continue;
//			}
//			while ((ch = getc(fp)) != EOF)
//				if (ch == argv[1][0])
//					cnt++;
//			fprintf(stdout, "the \"%s\" in %s: %d times.\n",argv[1], argv[i],cnt);
//		}
//	}
//
//	return 0;
//}