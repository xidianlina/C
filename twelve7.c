//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(void)
//{
//	int set, side, dice, i, sum;
//	printf("Enter the number of sets:enter q to stop : ");
//	while (scanf("%d", &set) == 1)
//	{
//		srand((unsigned int)time(0));
//		printf("How many sides and how many dice? ");
//		while (scanf("%d%d", &side, &dice) != 2)
//		{
//			scanf("%*s");//过滤非法输入
//			printf("enter error! enter again");
//		}
//		printf("Here are %d sets of %d %d-sided throws.\n", set, dice, side);
//		while (set--)
//		{
//			for (i = 0, sum = 0; i < dice; i++)
//				sum += rand() % side + 1;
//			printf("\t%d", sum);
//		}
//		printf("\nHow many sets? Enter q to stop: ");
//	}
//
//	return 0;
//}