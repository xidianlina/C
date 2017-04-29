//#include <stdio.h>
//#include <stdlib.h>
//
//#define WIDTH 100
//
//void echoarr(int[]);
//void sort(int[]);
//
//int main(void)
//{
//	int num[WIDTH];
//	int i;
//
//	for (i = 0; i < WIDTH; i++)
//		num[i] = rand() % 10 + 1;
//	puts("Origianl :");
//	echoarr(num);
//	sort(num);
//	puts("Sort :");
//	echoarr(num);
//
//	return 0;
//}
//
//void echoarr(int num[])
//{
//	int i;
//
//	for (i = 0; i < WIDTH; i++)
//		printf("%d\t", num[i]);
//	putchar('\n');
//}
//
//void sort(int num[])
//{
//	int i, j;
//
//	for (i = 0; i < WIDTH; i++)
//	{
//		for (j = i + 1; j < WIDTH; j++)
//		{
//			if (num[j] < num[i])
//			{
//				int temp = num[i];
//				num[i] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
//}