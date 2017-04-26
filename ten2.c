//#include <stdio.h>
//#define SIZE 5
//void echoarray(double *arr, int n);
//void copy_arr(double *target, double *source, int n);
//void copy_ptr(double *target, double *source, int n);
//void copy_ptrs(double *target, double *source, int *end);
//int main(void)
//{
//	double source[SIZE] = { 1.1,2.2,3.3,4.4,5.5 };	
//	double target1[5];
//	double target2[5];
//	double target3[5];
//	echoarray(source, SIZE);	
//	copy_arr(target1, source, SIZE);
//	echoarray(target1, SIZE);
//	copy_ptr(target2, source, SIZE);
//	echoarray(target2, SIZE);
//	copy_ptrs(target3, source, source +5);
//	echoarray(target3, SIZE);
//
//	return 0;
//}
//
//void echoarray(double *arr, int n)
//{
//	int i;
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%10.2lf", arr[i]);
//	}
//	putchar('\n');
//
//	return;
//}
//
//void copy_arr(double *target, double *source, int n)
//{
//	int i;
//	
//	for (i = 0; i < n; i++)
//	{
//		target[i] = source[i];
//	}
//
//	return;
//}
//
//void copy_ptr(double *target, double *source, int n)
//{
//	int i = 0;
//	while (i < n)
//	{
//		*target++ = *source++;
//		i++;
//	}
//
//	return;
//}
//
//void copy_ptrs(double *target, double *source, double *end)
//{
//	while (source < end)
//	{
//		*target++ = *source++;
//	}
//
//	return;
//}