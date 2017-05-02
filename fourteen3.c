//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include "gets.h"
//
//#define MAXTITL 40
//#define MAXAUTL 40
//#define MAXBKS 100
//
//struct book {
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	double value;
//};
//
//void sort_title(struct book *, int);
//void sort_value(struct book *, int);
//
//int main(void)
//{
//	struct book library[MAXBKS];
//	int cnt = 0;
//	int index;
//
//	printf("Please enter the book title.\n");
//	printf("Press [enter] at the start of a line to stop.\n");
//	while (cnt < MAXBKS&&s_gets(library[cnt].title, MAXTITL) != NULL&&library[cnt].title[0] != '\0')
//	{
//		printf("Now enter the author.\n");
//		s_gets(library[cnt].author, MAXAUTL);
//		printf("Now enter the value.\n");
//		scanf("%lf", &library[cnt++].value);
//		while (getchar() != '\n')
//			continue;
//		if (cnt < MAXBKS)
//			printf("Enter the next title.\n");
//	}
//
//	if (cnt > 0)
//	{
//		printf("Here is the list of your books:\n");
//		for (index = 0; index < cnt; index++)
//			printf("%s by %s: $%.2lf\n", library[index].title, library[index].author, library[index].value);
//		printf("\nHere is the list of your books by title:\n");
//		sort_title(&library[0], cnt);
//		for (index = 0; index < cnt; index++)
//			printf("%s by %s: $%.2lf\n", library[index].title, library[index].author, library[index].value);
//		printf("\nHere is the list of your books by value:\n");
//		sort_value(&library[0], cnt);
//		for (index = 0; index < cnt; index++)
//			printf("%s by %s: $%.2lf\n", library[index].title, library[index].author, library[index].value);
//	}
//	else
//		printf("No books? Too bad.\n");
//
//	return 0;
//}
//
//void sort_title(struct book *p, int cnt)
//{
//	int i, j;
//	struct book temp;
//
//	for (i = 0; i < cnt - 1; i++)
//		for (j = 0; j < cnt - i - 1; j++)
//			if (strcmp(p[j].title, p[j + 1].title) > 0)
//			{
//				temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//}
//
//void sort_value(struct book *p, int cnt)
//{
//	int i, j;
//	struct book temp;
//
//	for(i=0;i<cnt-1;i++)
//		for(j=0;j<cnt-i-1;j++)
//			if (p[j].value > p[j + 1].value)
//			{
//				temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//}