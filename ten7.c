//#include <stdio.h>
//#define ROWS 3
//#define COLS 5
//void printarr(double [][COLS], int);
//void copy_2d(double source[][COLS], double target[][COLS],int rows);
//void copy_1d(double source[], double target[], int cols);
//int main(void)
//{
//	double source[ROWS][COLS] = {
//		{2.2,3.3,1.1,5.5,9.2},
//		{2.4,5.1,3.2,9.4,8.3},
//		{6.2,5.4,8.5,6.7,1.9}
//	};
//	printarr(source, ROWS);
//	double target[ROWS][COLS];
//	copy_2d(source, target, ROWS);
//	printarr(target, ROWS);
//
//}
//
//void printarr(double arr[][COLS], int n)
//{
//	int i, j;
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < COLS; j++)
//		{
//			printf("%5.2lf", arr[i][j]);
//		}
//		putchar('\n');
//	}
//	putchar('\n');
//}
//
//void copy_2d(double source[][COLS], double target[][COLS], int rows)
//{
//	int i;
//
//	for (i = 0; i < rows; i++)
//	{
//		copy_1d(*(source + i), target[i], COLS);
//	}
//}
//
//void copy_1d(double source[], double target[], int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		target[i] = source[i];
//	}
//}