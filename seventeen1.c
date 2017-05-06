//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h> 
//#include <string.h> 
//#include "gets.h"
//
//#define TSIZE 45
//
//struct movie {
//	char name[TSIZE];
//	int rating;
//	struct movie *next;
//	struct movie *former;
//};
//
//void CreateMovies(struct movie **phead, struct movie **pend);
//void DisplayOriginal(struct movie *head, struct movie *end);
//void DisplayReverse(struct movie *head, struct movie *end);
//void FreeMoives(struct movie *head, struct movie *end);
//
//int main(void)
//{
//	struct movie *head = NULL, *end = NULL;
//	CreateMovies(&head, &end);
//	DisplayOriginal(head, end);
//	DisplayReverse(head, end);
//	FreeMoives(head, end);
//
//	return 0;
//}
//
//void CreateMovies(struct movie **phead, struct movie **pend)
//{
//	char input[TSIZE];
//	puts("Enter first movie title:");
//	while (s_gets(input,TSIZE) != NULL && input[0] != '\0')
//	{
//		if (*phead == NULL)
//		{
//			*phead = malloc(sizeof(struct movie));
//			(*pend) = *phead;
//		}
//		else
//		{
//			(*pend)->next = malloc(sizeof(struct movie));
//			(*pend)->next->former = (*pend);
//			(*pend) = (*pend)->next;
//		}
//		strcpy((*pend)->name, input);
//
//		puts("Enter your rating :");
//		scanf("%d", &(*pend)->rating);
//		getchar();
//
//		puts("Enter next movie title (empty line to stop):");
//	}
//}
//
//
//void DisplayOriginal(struct movie *head, struct movie *end)
//{
//	if (head == NULL)
//	{
//		printf("No movies in the list\n");
//		return;
//	}
//	printf("display in the original order:\n");
//	while (head != end)
//	{
//		printf("%s\t\t%d\n", head->name, head->rating);
//		head = head->next;
//	}
//	printf("%s\t\t%d\n", head->name, head->rating);
//}
//
//void DisplayReverse(struct movie *head, struct movie *end)
//{
//	if (end == NULL)
//	{
//		printf("No movies in the list\n");
//		return;
//	}
//	printf("display in the reverse order:\n");
//	while (end != head)
//	{
//		printf("%s\t\t%d\n", end->name, end->rating);
//		end = end->former;
//	}
//	printf("%s\t\t%d\n", end->name, end->rating);
//}
//
//void FreeMoives(struct movie *head, struct movie *end)
//{
//	struct movie *previous;
//	if (head == NULL)
//		return;
//	while (head != end)
//	{
//		previous = head;  //注意：先得到下一个指针，再释放前一个指针
//		head = head->next;
//		free(previous);
//	}
//	free(head);
//}