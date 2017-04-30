//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#define LEN 41
//char *s_gets(char *st, int n);
//int main(void)
//{
//	char name[LEN];
//	char words[LEN];
//	FILE *fp;
//	long offset;
//
//	puts("Please enter the file name:");
//	s_gets(name, LEN);
//	if ((fp = fopen(name, "r")) == NULL)
//	{
//		fprintf(stderr, "Can not open \"%s\" file.\n", name);
//		exit(EXIT_FAILURE);
//	}
//	puts("Please enter a position in the file (negative number or "
//		"Non numeric character to quit) :");
//	while (scanf("%ld", &offset) == 1 && offset > 0)
//	{
//		getchar();
//		fseek(fp, offset, SEEK_SET);
//		fscanf(fp, "%40s", words);
//		fprintf(stdout, "%s\n", words);
//		puts("Please enter a position in the file (negative number or "
//			"Non numeric character to quit) :");
//	}
//	fclose(fp);
//
//	return 0;
//}
//
//char *s_gets(char *st, int n)
//{
//	char *ret_val;
//	char *find;
//
//	ret_val = fgets(st, n, stdin);
//	if (ret_val)
//	{
//		find = strchr(st, '\n');
//		if (find)
//			*find = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret_val;
//}