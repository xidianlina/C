//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//#define LEN 40
//#define ROW 20
//#define COL 30
//
//char *s_gets(char *st, int n);
//
//int main(void)
//{
//	FILE * fs, *fd;				
//	char name[LEN];
//	int digit[ROW][COL];
//	char result[ROW][COL + 1];
//	char ch[] = { " .':~*= %#" };		
//	int i, j;
//
//	printf("Please enter the source file name:\n");
//	s_gets(name,COL);
//	
//	if ((fs = fopen(name, "r")) == NULL)
//	{
//		fprintf(stderr, "Could not open %s.", name);
//		exit(EXIT_FAILURE);
//	}
//	
//	for (i = 0; i < ROW; i++)
//		for (j = 0; j < COL; j++)
//			fscanf(fs, "%d", &digit[i][j]);
//
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			if ((i == 0 && j == 0) || (i == 0 && j == 29)
//				|| (i == 19 && j == 0) || (i == 19 && j == 29))
//				;
//			else if (i == 0) {
//				if ((abs(digit[i][j] - digit[i][j - 1]) > 1) && (abs(digit[i][j] - digit[i][j + 1]) > 1) &&
//					(abs(digit[i][j] - digit[i + 1][j]) > 1))
//					digit[i][j] = (digit[i][j - 1] + digit[i][j + 1] + digit[i + 1][j]) / 3.0 + 0.5;
//			}
//			else if (j == 0) {
//				if ((abs(digit[i][j] - digit[i - 1][j]) > 1) && (abs(digit[i][j] - digit[i][j + 1]) > 1) &&
//					(abs(digit[i][j] - digit[i + 1][j]) > 1))
//					digit[i][j] = (digit[i - 1][j] + digit[i][j + 1] + digit[i + 1][j]) / 3.0 + 0.5;
//			}
//
//			else if (i == 19) {
//				if ((abs(digit[i][j] - digit[i][j - 1]) > 1) && abs((digit[i][j] - digit[i][j + 1]) > 1) &&
//					(abs(digit[i][j] - digit[i - 1][j]) > 1))
//					digit[i][j] = (digit[i - 1][j] + digit[i][j - 1] + digit[i][j + 1]) / 3.0 + 0.5;
//			}
//
//			else if (j == 29) {
//				if ((abs(digit[i][j] - digit[i][j - 1]) > 1) && (abs(digit[i][j] - digit[i + 1][j]) > 1) &&
//					(abs(digit[i][j] - digit[i - 1][j]) > 1))
//					digit[i][j] = (digit[i - 1][j] + digit[i][j - 1] + digit[i + 1][j]) / 3.0 + 0.5;
//			}
//
//			else {
//				if ((abs(digit[i][j] - digit[i][j - 1]) > 1) && (abs(digit[i][j] - digit[i][j + 1]) > 1) &&
//					(abs(digit[i][j] - digit[i - 1][j]) > 1) && (abs(digit[i][j] - digit[i + 1][j]) > 1))
//					digit[i][j] = (digit[i - 1][j] + digit[i + 1][j] + digit[i][j - 1] + digit[i][j + 1]) / 4.0 + 0.5;
//			}
//		}
//	}
//
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			result[i][j] = ch[digit[i][j]];
//		}
//		result[i][j] = '\0';
//	}
//	printf("Enter the destination file name:\n");
//	gets(name);
//	//打开目标文件
//	if ((fd = fopen(name, "w")) == NULL)
//	{
//		fprintf(stderr, "Could not open %s.\n", name);
//		exit(EXIT_FAILURE);
//	}
//	//将结果打印出来并写入目标文件
//	for (i = 0; i < ROW; i++)
//	{
//		fprintf(stdout, "%s\n", result[i]);
//		fprintf(fd, "%s\n", result[i]);
//	}
//	//关闭文件
//	if (fclose(fs) != 0 || fclose(fd) != 0)
//		fprintf(stderr, "Error for closing file.\n");
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