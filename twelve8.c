//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//int *make_array(int, int);
//void show_array(const int[], int);
//
//int main(void)
//{
//	int *pa;
//	int size;
//	int value;
//
//	printf("Enter the number of elements: ");
//	while (scanf("%d", &size) == 1 && size > 0)
//	{
//		printf("Enter the initialization value: ");
//		scanf("%d", &value);
//		pa = make_array(size, value);
//		if (pa)
//		{
//			show_array(pa, size);
//			free(pa);
//		}
//		printf("Enter the number of elements (<1 to quit): ");
//	}
//	printf("\n");
//
//	return 0;
//}
//
//int *make_array(int size, int val)
//{
//	int *ptr = (int*)malloc(size * sizeof(int));
//	int i;
//
//	for (i = 0; i < size; i++)
//	{
//		ptr[i] = val;
//	}
//
//	return ptr;
//}
//
//void show_array(const int ar[], int n)
//{
//	int i;
//
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d\t", ar[i-1]);
//		if (i % 8 == 0)
//			printf("\n");
//	}
//	printf("\n");
//}