//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>
//#include "gets.h"
//
//#define TSIZE 45
//#define MAXSIZE 5
//
//typedef struct film {
//	char titile[TSIZE];
//	int rating;
//} Item;
//
//typedef struct list {
//	Item entries[MAXSIZE];
//	int items;
//} List;
//
////初始化链表为空
//void InitializeList(List * plist)
//{
//	int i;
//
//	for (i = 0; i < MAXSIZE; i++)
//	{
//		strcpy((plist->entries[i]).titile, "");
//		(plist->entries[i]).rating = 0;
//		plist->items = 0;
//	}
//}
//
////链表为空,返回1
//int ListIsEmpty(const List * plist)
//{
//	if (plist->items == 0)
//		return true;
//	else
//		return false;
//}
//
////链表为满，返回1
//int ListIsFull(const List * plist)
//{
//	if (plist->items == MAXSIZE)
//		return true;
//	else
//		return false;
//}
//
////为链表添加项，成功返回1
//int AddItem(List * plist, Item item)
//{
//	if (plist->items == MAXSIZE)
//	{
//		fprintf(stderr, "The list is full.\n");
//		return 0;
//	}
//
//	plist->entries[plist->items] = item;
//	(plist->items)++;
//
//	return 1;
//}
//
////确定链表的项数
//unsigned int ListItemCount(List * plist)
//{
//	return plist->items;
//}
//
////遍历链表
//void Traverse(const List * plist, void(*pfun)(Item item))
//{
//	int i;
//
//	for (i = 0; i < plist->items; i++)
//	{
//		(*pfun)(plist->entries[i]);
//	}
//}
//
////清空链表
//void EmptyTheList(List * plist)
//{
//	int i;
//
//	for (i = 0; i < plist->items; i++)
//	{
//		strcpy((plist->entries[i]).titile, "");
//		(plist->entries[i]).rating = 0;
//		plist->items = 0;
//	}
//}
//
//void show_list(Item item);
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
//	while (s_gets(temp.titile, TSIZE) != NULL &&temp.titile[0] != '\0')
//	{
//		printf("Enter your rating <0-10>:\n");
//		scanf("%d", &temp.rating);
//		while (getchar() != '\n')
//			continue;
//		if (AddItem(&movies, temp) == 0)
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
//	EmptyTheList(&movies);
//	printf("Bye.\n");
//
//	return 0;
//}
//
//void show_list(Item item)
//{
//	printf("Movie: %s   Rating: %d\n", item.titile, item.rating);
//}