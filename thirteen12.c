//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//#define ROW 20
//#define COL 30
//char *s_gets(char *st, int n);
//
//int main(void)
//{
//	FILE *fp;
//	char name[COL];
//	char photo[ROW][COL+1];
//	char table[] = " .':~*=&%@";
//	int num[ROW][COL];
//	int row, col;
//	int i = 0;
//	printf("Enter the name of source file:");
//	s_gets(name,COL);
//	if ((fp = fopen(name, "r")) == NULL)
//	{
//		printf("Can't open %s", name);
//		exit(1);
//	}
//
//	for (row = 0; row<ROW; row++)
//		for (col = 0; col<COL; col++)
//			fscanf(fp, "%d", &num[row][col]);
//
//	for (row = 0; row<ROW; row++)
//	{
//		for (col = 0; col<COL; col++)
//			photo[row][col] = table[num[row][col]];
//		photo[row][col] = '\0';
//	}
//
//	for (row = 0; row<ROW; row++)
//		puts(photo[row]);
//
//	printf("Enter the name of destination file:");
//	s_gets(name,COL);
//	if ((fp = fopen(name, "w")) == NULL)
//	{
//		printf("Can't open %s", name);
//		exit(1);
//	}
//
//	for (row = 0; row<ROW; row++)
//		fprintf(fp, "%s\n", photo[row]);
//
//	return 0;
//}
//
//char * s_gets(char * st, int n)
//{
//	char * find;
//	char * ret_val;
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
//
//	return ret_val;
//}