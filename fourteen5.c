//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define CSIZE 4
//
//struct name {
//	char fname[20];
//	char lname[20];
//};
//
//struct student {
//	struct name names;
//	double score[3];
//	double average;
//};
//
//void get_score(struct student *);
//void average_score(struct student *);
//void display_info(struct student *);
//void class_average_score(struct student *);
//
//int main(void)
//{
//	struct student scores[CSIZE] = {
//		{{"Akdjkd","Ekdjd"},0,0,0,0},
//		{{"Cjkdj","Skdjkj"},0,0,0,0},
//		{{"Gdkeak","Ydj"},0,0,0,0},
//		{{"Kdkjd","Wkdkjf"},0,0,0,0}
//	};
//	get_score(scores);
//	average_score(scores);
//	display_info(scores);
//	class_average_score(scores);
//
//	return 0;
//}
//
//void get_score(struct student *p)
//{
//	int i, j;
//
//	for (i = 0; i < CSIZE; i++)
//	{
//		printf("Enter the 3 scores of %s %s:", (p + i)->names.fname, (p + i)->names.lname);
//		for (j = 0; j < 3; j++)
//			scanf("%lf", &((p + i)->score[j]));
//	}
//	printf("Input finished!\n");
//}
//
//void average_score(struct student *p)
//{
//	int i, j;
//	double total;
//
//	for (i = 0; i < CSIZE; i++)
//	{
//		for (j = 0, total = 0; j < 3; j++)
//			total += (p + i)->score[j];
//		(p + i)->average = total / 3;
//	}
//	printf("Calculate finished!\n");
//}
//
//void display_info(struct student *p)
//{
//	int i, j;
//
//	for (i = 0; i < CSIZE; i++)
//	{
//		printf("%s %s:\t", (p + i)->names.fname, (p + i)->names.lname);
//		for (j = 0; j < 3; j++)
//			printf("score%d: %g\t", j + 1, (p + i)->score[j]);
//		printf("average:%g\n", (p + i)->average);
//	}
//}
//
//void class_average_score(struct student *p)
//{
//	int i;
//	double total;
//
//	for (i = 0, total = 0; i < CSIZE; i++)
//		total += (p + i)->average;
//	printf("class average is %g\n", total / CSIZE);
//}