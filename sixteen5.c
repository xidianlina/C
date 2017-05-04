//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//#define M 20
//
//void random_pick(int *p, int size, int number);
//
//int main(void)
//{
//	int i, member[M], number;
//	srand(time(0));
//	printf("the M members are:\n");
//	for (i = 0; i<M; i++)
//	{
//		member[i] = 100 + i;
//		printf("%d\t", member[i]);
//	}
//	printf("\ninput the size you want to pick (q to quit):");
//	while (scanf("%d", &number) == 1)
//	{
//		random_pick(member, M, number);
//		printf("input the size you want to pick (q to quit):");
//	}
//}
//
//void random_pick(int *p, int size, int number)
//{
//	int i, j, count, pick[M], temp, repeat; //pick数组用于存放已选取成员的下标
//	for (i = 0, count = 0; i<number; )
//	{
//		temp = rand() % size;
//		for (j = 0, repeat = 0; j<count; j++)   //去除重复数
//			if (temp == pick[j])
//			{
//				repeat = 1;
//				break;
//			}
//		if (repeat == 0)
//		{
//			pick[count++] = temp;
//			i++;
//		}
//	}
//
//	printf("the picks are:\n");
//	for (j = 0; j<count; j++)
//		printf("%d\t", p[pick[j]]);
//	printf("\n");
//}