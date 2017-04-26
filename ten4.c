//#include <stdio.h>
//int max_index(double *, int);
//int main(void)
//{
//	double arr[9] = { 1.1,20.6,2.4,5.9,2.87,60.36,65.12,54.2,10.65 };
//	int index;
//
//	index = max_index(arr, 9);
//	printf("The index of max number is %d\n", index);
//
//	return 0;
//}
//
//int max_index(double *arr, int n)
//{
//	int index;
//	int i;
//	double max;
//
//	for (i = 1, max = arr[0], index = 0; i < n; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//			index = i;
//		}
//	}
//
//	return index;
//}