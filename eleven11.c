//#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
//#include "getstr.h"
//#define LIM 3
//#define SIZE 81
//void origin_put(char **p, int n);
//void ascii_put(char **p, int n);
//void length_put(char **p, int n);
//int first_word_length(char *p);
//void word_put(char **p, int n);
//int main(void)
//{
//	char str[LIM][SIZE];
//	char *p[LIM];
//	char command[LIM];
//	int n;
//
//	while (1)
//	{
//		n = 0;
//		puts("input no more than 10 strings finished by EOF (^Z):");
//		do
//		{
//			if (mygets(str[n],SIZE) == NULL)
//				break;
//			p[n] = str[n];
//			n++;
//		} while (n<LIM);
//		puts("select:");
//		puts("a. put originally");
//		puts("b. put in order by ascii");
//		puts("c. put in order by string's length");
//		puts("d. put in order by first word's length");
//		puts("e. input string again");
//		puts("q. Quit");
//		do
//		{
//			mygets(command,SIZE);
//			switch (command[0])
//			{
//			case 'a':
//				puts("put originally");
//				origin_put(p, n);
//				break;
//			case 'b': 
//				puts("put in order by ascii");
//				ascii_put(p, n);
//				break;
//			case 'c':
//				puts("put in order by string's length:");
//				length_put(p, n);
//				break;
//			case 'd': 
//				puts("put in order by first word's length:");
//				word_put(p, n);
//				break;
//			case 'e': break;
//			default:
//				puts("Quit.");
//				return 0;
//			}
//		} while (command[0] != 'e');
//	}
//
//	return 0;
//}
//
//void origin_put(char **p, int n)
//{
//	int i;
//	for (i = 0; i<n; i++)
//		puts(p[i]);
//}
//
//void ascii_put(char **p, int n)
//{
//	int i, j;
//	char *temp;
//	for (i = 0; i<n; i++)
//		for (j = 0; j<n - i - 1; j++)
//			if (strcmp(p[j], p[j + 1])>0)
//			{
//				temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//	origin_put(p, n);
//}
//
//void length_put(char **p, int n)
//{
//	int i, j;
//	char *temp;
//	for (i = 0; i<n; i++)
//		for (j = 0; j<n - i - 1; j++)
//			if (strlen(p[j])>strlen(p[j + 1]))
//			{
//				temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//	origin_put(p, n);
//}
//
//void word_put(char **p, int n)
//{
//	int i, j;
//	char *temp;
//	for (i = 0; i<n; i++)
//		for (j = 0; j<n - i - 1; j++)
//			if (first_word_length(p[j]) > first_word_length(p[j + 1]))
//			{
//				temp = p[j];
//				p[j] = p[j + 1];
//				p[j + 1] = temp;
//			}
//	origin_put(p, n);
//}
//
//int first_word_length(char *p)
//{
//	int i;
//	for (; !isalpha(*p); p++)
//		if (*p == '\0')
//			return 0;
//	for (i = 1; isalpha(p[i]); i++)
//		continue;
//	return i;
//}