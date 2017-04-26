//#include <stdio.h>
//#define SIZE 9
//void echoarr(double *, int);
//void sort_arr_desc(double *, int);
//int main(void)
//{
//	double arr[] = { 3.3,1.2,6.5,4.2,0.6,9.6,5.1,7.5,0.55 };
//
//	echoarr(arr, SIZE);
//	sort_arr_desc(arr, SIZE);
//	echoarr(arr, SIZE);
//
//	return 0;
//}
//
//void echoarr(double *arr, int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		printf("%10.2lf", arr[i]);
//	}
//	putchar('\n');
//
//	return;
//}
//
//void sort_arr_desc(double *arr, int n)
//{
//	int i, j;
//	double tmp;
//
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n - i-1; j++)
//		{
//			if (arr[j] <arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//	}
//}