//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#include "gets.h"
//
//#define SLEN 80
//
//#ifndef _STACK_H_
//#define _STACK_H_
//
//typedef char Item;
//
//typedef struct node {
//	Item item;
//	struct node *next;
//}Node;
//
//typedef struct stack {
//	Node *top;
//	Node *bottom;
//}Stack;
//
//void InitializeStack(Stack *ps);
//bool StackIsEmpty(const Stack *ps);
//bool StackIsFull(const Stack *ps);
//bool PushStack(Item item, Stack *ps);
//bool PopStack(Item *pitem, Stack *ps);
//
//#endif
//
//static void CopyToNode(Item item, Node *pn);
//static void CopyToItem(Node *pn, Item *pi);
//
//int main(void)
//{
//	char str[SLEN];
//	Stack stack;
//	int i;
//	Item ch;
//
//	InitializeStack(&stack);
//	printf("Please enter string:");
//	s_gets(str, SLEN);
//	puts("Original order is ");
//	puts(str);
//
//	for (i = 0; str[i] != '\0'&&i < SLEN; i++)
//		PushStack(str[i], &stack);
//
//	puts("Reverse order is ");
//	while (PopStack(&ch, &stack))
//		putchar(ch);
//
//	putchar('\n');
//
//	return 0;
//}
//
//void InitializeStack(Stack *ps)
//{
//	ps->top = ps->bottom = NULL;
//}
//
//bool StackIsEmpty(const Stack *ps)
//{
//	return ps->top == NULL;
//}
//
//bool StackIsFull(const Stack *ps)
//{
//	Node *pn;
//	pn = (Node *)malloc(sizeof(Node));
//
//	if (pn == NULL)
//		return true;
//	else
//		free(pn);
//	return false;
//}
//
//bool PushStack(Item item, Stack *ps)
//{
//	Node *pnew;
//
//	if (StackIsFull(ps))
//		return false;
//	pnew = (Node *)malloc(sizeof(Node));
//
//	if (pnew == NULL)
//	{
//		fprintf(stderr, "Unable to allocate memory!\n");
//		exit(1);
//	}
//	CopyToNode(item, pnew);
//	if (StackIsEmpty(ps))
//	{
//		pnew->next = NULL;
//		ps->bottom = pnew;
//	}
//	else
//		pnew -> next = ps->top;
//	ps->top = pnew;
//
//	return true;
//}
//
//bool PopStack(Item *item, Stack *ps)
//{
//	Node *pn;
//	if (StackIsEmpty(ps))
//		return false;
//	CopyToItem(ps->top, item);
//	pn = ps->top;
//	ps->top = ps->top->next;
//	free(pn);
//	if (ps->top == NULL)
//		ps->bottom = NULL;
//
//	return true;
//}
//
//static void CopyToNode(Item item, Node *pn)
//{
//	pn->item = item;
//}
//
//static void CopyToItem(Node *pn, Item *pi)
//{
//	*pi = pn->item;
//}