//#define _CRT_SECURE_NO_WARNINGS	
//#include <stdio.h>
//#include <stdlib.h>  
//#include <stdbool.h>
//#include "list.h"   
//#include "gets.h"
//
//#define TSIZE 45
//
//struct film {
//	char title[TSIZE];
//	int rating;
//};
//
//typedef struct film Item;
//
//typedef struct node {
//	Item item;
//	struct node * next;
//}Node;
//
//typedef struct list{
//	Node *head;
//	Node *end;
//}List;
//
//void show_list(Item item);
//
//void InitializeList(List * plist)
//{
//	plist->head = NULL;
//	plist->end = NULL;
//}
//
//int ListIsEmpty(const List *plist)
//{
//	if (plist->head == NULL) 
//		return true;
//	else
//		return false;
//}
//
//int ListIsFull(const List *plist)
//{
//	Node *pnode;
//	pnode = (Node *)malloc(sizeof(Node));
//	if (pnode == NULL) 
//		return true;
//	else
//	{
//		free(pnode);
//		return false;
//	}
//}
//
//unsigned int ListItemCount(const List * plist)
//{
//	unsigned int count = 0;
//	Node *pnode = plist->head;
//
//	while (pnode != NULL)
//	{
//		pnode = pnode->next;
//		count++;
//	}
//
//	return count;
//}
//
//int AddItem(Item item, List * plist)
//{
//	Node *pnew;
//	pnew = malloc(sizeof(Node));
//	if (pnew == NULL) 
//		return false;
//
//	pnew->next = NULL;
//	pnew->item = item;
//
//	if (plist->head == NULL)
//		plist->head = pnew;
//	else
//		plist->end->next = pnew;
//	plist->end = pnew;
//
//	return true;
//}
//
//void Traverse(const List *plist, void(*pfun)(Item item))
//{
//	Node *pnode = plist->head;
//	
//	while (pnode != NULL)
//	{
//		(*pfun)(pnode->item);
//		pnode = pnode->next;
//	}
//}
//
//void EmptyTheList(List * plist)
//{
//	Node *pnode;
//
//	while (plist->head != NULL)
//	{
//		pnode = plist->head;
//		plist->head = plist->head->next;
//		free(pnode);
//	}
//}
//
//int main(void)
//{
//	List movies;
//	Item temp;
//
//	//初始化
//	InitializeList(&movies);
//	if (ListIsFull(&movies))
//	{
//		fprintf(stderr, "No memory available.\n");
//		exit(1);
//	}
//
//	//储存数据
//	printf("Please input the title of movie:\n");
//	while (s_gets(temp.title, TSIZE) != NULL &&temp.title[0] != '\0')
//	{
//		printf("Enter your rating <0-10>:\n");
//		scanf("%d", &temp.rating);
//		while (getchar() != '\n')
//			continue;
//		if (AddItem(temp,&movies) == 0)
//		{
//			fprintf(stderr, "Allocting memory error.\n");
//			break;
//		}
//		if (ListIsFull(&movies))
//		{
//			fprintf(stderr, "Sorry, the list is full.\n");
//			break;
//		}
//		printf("Input the next title (Empty line to stop):\n");
//	}
//
//	//显示数据
//	if (ListIsEmpty(&movies))
//	{
//		fprintf(stderr, "Sorry, the list is empty.\n");
//		return 0;
//	}
//	printf("Here is the movie list:\n");
//	Traverse(&movies, show_list);
//	printf("You entered %u movies.\n", ListItemCount(&movies));
//
//	//清空数据
//	EmptyTheList(&movies);
//
//	printf("Bye.\n");
//
//	return 0;
//}
//
//void show_list(Item item)
//{
//	printf("Movie: %s   Rating: %d\n", item.title, item.rating);
//}