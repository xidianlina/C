//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#define COLS 5
//void store_array(double arr[][COLS], int);
//double average_row(double *, int);
//double average_total(double arr[][COLS], int);
//double get_max(double arr[][COLS], int);
//int main(void)
//{
//	double arr[3][COLS];
//	int rows;
//
//	store_array(arr, 3);
//	for (rows = 0; rows < 3; rows++)
//	{
//		printf("The average of %d is row %5.1lf\n", rows,average_row(arr[rows],COLS));
//	}
//	printf("The sum of array is %5.1lf\n", average_total(arr, 3));
//	printf("The max of array is %5.1lf\n", get_max(arr, 3));
//
//	return 0;
//}
//void store_array(double arr[][COLS], int rows)
//{
//	int i, j;
//
//	printf("Please 3x5 double array :\n");
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < COLS; j++)
//		{
//			scanf("%lf", &arr[i][j]);
//		}
//	}
//}
//
//double average_row(double *arr, int cols)
//{
//	int i;
//	double sum;
//
//	for (i = 0,sum=0; i < cols; i++)
//	{
//		sum += arr[i];
//	}
//
//	return sum / cols;
//}
//
//double average_total(double arr[][COLS], int rows)
//{
//	double total=0;
//	int i,j;
//
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < COLS; j++)
//		{
//			total += *(*(arr + i) + j);
//		}
//	}
//
//	return total;
//}
//
//double get_max(double arr[][COLS], int rows)
//{
//	double max=0;
//	int i, j;
//
//	for (i = 0; i < rows; i++)
//	{
//		for (j = 0; j < COLS; j++)
//		{
//			max = max > *(*(arr + i) + j) ? max : *(*(arr + i) + j);
//		}
//	}
//
//	return max;
//}