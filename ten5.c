//#include <stdio.h>
//#define SIZE 6
//double gap(double *, int);
//int main(void)
//{
//	double arr[] = { 2.2,6.23,9.32,40.5,1.02,6.85 };
//	
//	printf("The gag between max and min is %g\n", gap(arr, SIZE));
//
//	return 0;
//}
//
//double gap(double *arr, int n)
//{
//	double max;
//	double min;
//	int i;
//	
//	for (i = 1,max=arr[0],min=arr[0]; i < n; i++)
//	{
//		max = max > arr[i] ? max : arr[i];
//		min = min < arr[i] ? min : arr[i];
//	}
//
//	return max - min;
//}