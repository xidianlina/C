//#include <stdio.h>
//#define COLS 5
//void display(double (*arr)[COLS], int rows);
//void twice(double (*arr)[COLS], int rows);
//int main(void)
//{
//	double source[3][COLS] = {
//		{1.1,2.2,3.3,4.4,5.5,},
//		{6.6,7.7,8.8,9.9,10.10},
//		{11.11,12.12,13.13,14.14,15.15}
//		};
//
//	display(source, 3);
//	twice(source,3);
//	display(source, 3);
//
//	return 0;
//}
//
//void display(double (*arr)[COLS], int n)
//{
//	int i, j;
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < COLS; j++)
//		{
//			printf("%g\t", *(*(arr+i)+j));
//		}
//		putchar('\n');
//	}
//}
//
//void twice(double (*arr)[COLS], int rows)
//{
//	int i, j;
//
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < COLS; j++)
//		{
//			arr[i][j]=2*arr[i][j];
//		}
//	}
//}