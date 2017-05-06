//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>
//#include <ctype.h>
//#include "gets.h"
//
//#define SLEN 100
//
//#ifndef _TREE_H_
//#define _TREE_H_
//
//#define MAX 30
//
//typedef struct {
//	char word[MAX];
//	int times;
//}Item;
//
//typedef struct node {
//	Item item;
//	struct node *left;
//	struct node *right;
//}Node;
//
//typedef struct {
//	struct node *root;
//}Tree;
//
//void InitializeTree(Tree * ptree);
//
//bool TreeIsEmpty(const Tree * ptree);
//
//bool TreeIsFull(void);//const Tree * ptree);
//
//int TreeItemCount(const Tree * ptree);
//
//bool AddItem(Item * pitem, Tree * ptree);
//
//bool InTree(Item * pi, Tree * ptree);
//
//bool DeleteItem(Item * pi, Tree * ptree);
//
//void Traverse(const Tree * ptree, void(*pfun)(Node *node));
//
//void DeleteAll(Tree * ptree);
//
//bool ChangeItem(Item * pi, Tree * ptree);
//
//bool DisplayItem(Item * pi, Tree * ptree);
//
//#endif
//
//void InorderTraversal(Node *pnode, void(*pfun)(void *));
//void PostorderTraversal(Node *pnode, void(*pfun)(void *));
//int PreorderTraversal(Node *pnode);
//Node **BinarySearch(Item *pitem, Node **ppnode);
//Node *MakeNode(Item item);
//int CompareItem(Item, Item);
//
//void InitializeTree(Tree *ptree)
//{
//	ptree->root = NULL;
//}
//
//bool TreeIsEmpty(const Tree *ptree)
//{
//	if (ptree->root == NULL)
//		return true;
//	else
//		return false;
//}
//
//bool TreeIsFull(void)
//{
//	Node *pn;
//
//	pn = (Node *)malloc(sizeof(Node));
//	if (pn == NULL)
//		return true;
//	free(pn);
//
//	return false;
//}
//
//int TreeItemCount(const Tree *ptree)
//{
//	return PreorderTraversal(ptree->root);
//}
//
//bool AddItem(Item *pitem, Tree *ptree)
//{
//	if (*BinarySearch(pitem, &(ptree->root)) != NULL)
//		return false;
//	else
//	{
//		*BinarySearch(pitem, &(ptree->root)) = MakeNode(*pitem);
//		return true;
//	}
//}
//
//bool InTree(Item *pitem, Tree *ptree)
//{
//	if (*BinarySearch(pitem, &(ptree->root)) == NULL)
//		return false;
//	else
//		return true;
//}
//
//bool DeleteItem(Item *pitem, Tree *ptree)
//{
//	Node **ppnode;
//	Node *mid, *left, *right;
//
//	ppnode = BinarySearch(pitem, &(ptree->root));
//	if (*ppnode == NULL)
//		return false;
//	mid = *ppnode;
//	left = mid->left;
//	right = mid->right;
//	if (left == NULL&&right == NULL)
//		*ppnode = NULL;
//	else if (left == NULL&&right != NULL)
//		*ppnode = right;
//	else if (left != NULL&&right == NULL)
//		*ppnode = left;
//	else
//	{
//		while (left->right != NULL)
//			left = left->right;
//		left->right = right;
//		*ppnode = mid->left;
//	}
//	printf("delete:%s", mid->item.word);
//	free(mid);
//	
//	return true;
//}
//
//void Traverse(const Tree *ptree, void(*pfun)(Node *node))
//{
//	InorderTraversal(ptree->root, (*pfun));
//}
//
//void DeleteAll(Tree *ptree)
//{
//	PostorderTraversal(ptree->root, free);
//	ptree->root = NULL;
//}
//
//bool ChangeItem(Item *pitem, Tree *ptree)
//{
//	if (*BinarySearch(pitem, &(ptree->root)) == NULL)
//		return false;
//	else
//	{
//		(*BinarySearch(pitem, &(ptree->root)))->item.times++;
//		return true;
//	}
//}
//
//bool DisplayItem(Item *pitem, Tree *ptree)
//{
//	Node *pnode = *BinarySearch(pitem, &(ptree->root));
//	if (pnode == NULL)
//		return false;
//	else
//	{
//		printf("%s has occurred %d times\n", pnode->item.word, pnode->item.times);
//		return true;
//	}
//}
//
//void InorderTraversal(Node *pnode, void(*pfun)(void *))
//{
//	if (pnode != NULL)
//	{
//		InorderTraversal(pnode->left, (*pfun));
//		(*pfun)(pnode);
//		InorderTraversal(pnode->right, (*pfun));
//	}
//}
//
//void PostorderTraversal(Node *pnode, void(*pfun)(void *))
//{
//	if (pnode != NULL)
//	{
//		PostorderTraversal(pnode->left, (*pfun));
//		PostorderTraversal(pnode->right, (*pfun));
//		(*pfun)(pnode);
//	}
//}
//
//int PreorderTraversal(Node *pnode)
//{
//	if (pnode != NULL)
//		return 1 + PreorderTraversal(pnode->left) + PreorderTraversal(pnode->right);
//	else
//		return 0;
//}
//
//Node **BinarySearch(Item *pitem, Node **ppnode)
//{
//	if (*ppnode == NULL || CompareItem(*pitem, (*ppnode)->item) == 0)
//		return ppnode;
//	if (CompareItem(*pitem, (*ppnode)->item) < 0)
//		return BinarySearch(pitem, &((*ppnode)->left));
//	else
//		return BinarySearch(pitem, &((*ppnode)->right));
//}
//
//Node *MakeNode(Item item)
//{
//	Node *pnew;
//	pnew = (Node *)malloc(sizeof(Node));
//	pnew->item = item;
//	pnew->left = NULL;
//	pnew->right = NULL;
//	return pnew;
//}
//
//int CompareItem(Item item1, Item item2)
//{
//	return strcmp(item1.word, item2.word);
//}
//
//void display(Node *node);
//char *take(char *, char word[]);
//
//int main(void)
//{
//	char str[SLEN];
//	char *p;
//	FILE *fp;
//	Tree article;
//	Item item;
//	InitializeTree(&article);
//
//	printf("Enter the filename: ");
//	s_gets(str,SLEN);
//	while ((fp = fopen(str, "r")) == NULL)
//	{
//		printf("Can not open %s,Please enter again!", str);
//		s_gets(str, SLEN);
//	}
//	while ((p = fgets(str, SLEN, fp)) != NULL)
//	{
//		while (*(p = take(p, item.word)) != '\0')
//		{
//			if (InTree(&item, &article) == false)
//			{
//				item.times = 1;
//				AddItem(&item, &article);
//			}
//			else
//				ChangeItem(&item, &article);
//		}
//	}
//
//	while (1)
//	{
//		printf("\na.list all the words\n");
//		printf("b.report how many times the word occurred\n");
//		printf("c.quit\n");
//		s_gets(str, SLEN);
//		switch (tolower(str[0]))
//		{
//			case 'a': 
//				Traverse(&article, display);
//				break;
//			case 'b':  
//				s_gets(item.word,MAX);
//				if (InTree(&item, &article)) 
//					DisplayItem(&item, &article);
//				else 
//					puts("the word is not in the tree");
//				break;
//			case 'c': 
//				puts("quit");
//				DeleteAll(&article);
//				return 0;
//			default:  
//				break;
//		}
//	}
//
//	return 0;
//}
//
//void display(Node *node)
//{
//	printf("%-20s%-20d\n", node->item.word, node->item.times);
//}
//
////从p字符串中读出第一个单词到word里，返回此单词后面一个字符的地址
//char * take(char *p, char word[])
//{
//	while (!isalpha(*p))
//	{
//		if (*p == '\0')
//			return p;
//		p++;
//	}
//	do
//	{
//		*word++ = *p++;
//	} while (isalpha(*p));
//	*word = '\0';
//
//	return p;
//}