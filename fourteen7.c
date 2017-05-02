//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include "gets.h"
//
//int count = 0;//全局变量，书的个数
//
//void read_file(struct book *p, char* filename);
//void display(struct book *p);
//void change(struct book *p);
//void reduce(struct book *p);
//void add(struct book *p);
//void write_file(struct book *p, char*);
//
//#define MAXTITL 40
//#define MAXAUTL 40
//#define MAXBKS 10            
//
//struct book {                   
//	char title[MAXTITL];
//	char author[MAXAUTL];
//	float value;
//};
//
//int main(void)
//{
//	struct book library[MAXBKS]; 
//	char command[10];
//	read_file(library, "book.dat");
//	printf("select the functions:\n");
//	printf("d: display all book            c: change a book\n");
//	printf("r: reduce a book               a: add books\n");
//	printf("other: save and quit:");
//	while (1)
//	{
//		s_gets(command,10);
//		switch (command[0])
//		{
//			case 'd': 
//				display(library); 
//				break;
//			case 'c': 
//				change(library);
//				break;
//			case 'r': 
//				reduce(library);
//				break;
//			case 'a':
//				add(library); 
//				break;
//			default: 
//				write_file(library, "book.dat"); 
//				return 0;
//		}
//		printf("\nselect the functions:\n");
//		printf("d: display all book            c: change a book\n");
//		printf("r: reduce a book               a: add books\n");
//		printf("other: save and quit:");
//	}
//}
//
//void read_file(struct book *p, char* filename)
//{
//	FILE * pbooks;
//	if ((pbooks = fopen(filename, "a+b")) == NULL)
//	{
//		printf("Can't open %s file\n", filename);
//		exit(1);
//	}
//	rewind(pbooks);           
//	while (count < MAXBKS &&  fread(p + count, sizeof(struct book), 1, pbooks) == 1)
//		count++;
//	fclose(pbooks);
//	printf("read %s successfully! There are %d books.\n", filename, count);
//}
//
//void display(struct book *p)
//{
//	int i;
//
//	if (count == 0)
//		printf("There is no book.\n");
//	printf("book list for %d books:\n", count);
//	for (i = 0; i<count; i++)
//		printf("%s by %s: $%.2f\n", p[i].title, p[i].author, p[i].value);
//}
//
//void change(struct book *p)
//{
//	int i;
//	char title[MAXTITL];
//
//	printf("input the name of the book which you want change:");
//	s_gets(title,10);
//	for (i = 0; i<count; i++)
//		if (strcmp(p[i].title, title) == 0)
//		{
//			puts("Please add new a book title.");
//			s_gets(p[i].title,10);
//			puts("Now enter the author.");
//			s_gets(p[i].author,10);
//			puts("Now enter the value.");
//			scanf("%f", &p[i].value);
//			getchar();
//			printf("the book has been changed!\n");
//			return;
//		}
//	printf("error!the book is not in the list\n");
//}
//
//void reduce(struct book *p)
//{
//	int i;
//	char title[MAXTITL];
//
//	if (count == 0)
//	{
//		printf("error! book list is empty!");
//		return;
//	}
//	printf("input the name of the book which you want change:");
//	s_gets(title,10);
//	for (i = 0; i<count; i++)
//		if (strcmp(p[i].title, title) == 0)
//		{
//			p[i] = p[count - 1];
//			strcpy(p[count - 1].title, "");
//			strcpy(p[count - 1].author, "");
//			p[count - 1].value = 0;
//			count--;
//			printf("%s has been delete from book list\n", title);
//			return;
//		}
//	printf("error! %s is not in book list\n", title);
//	return;
//}
//
//void add(struct book *p)
//{
//	if (count == MAXBKS)
//	{
//		fputs("error!The book.dat file is full.", stderr);
//		return;
//	}
//	puts("Please add new book titles.");
//	puts("Press [enter] at the start of a line to stop.");
//	while (count < MAXBKS && s_gets(p[count].title,10) != NULL && p[count].title[0] != '\0')
//	{
//		puts("Now enter the author.");
//		s_gets(p[count].author,10);
//		puts("Now enter the value.");
//		scanf("%f", &p[count++].value);
//		getchar();
//		if (count < MAXBKS)
//			puts("Enter the next title.");
//		else
//			puts("The book list file is full.");
//	}
//}
//
//void write_file(struct book *p, char *str)
//{
//	FILE * pbooks;
//	pbooks = fopen(str, "wb");//将文件以可写模式打开，目的是清空文件内容
//	pbooks = fopen(str, "r+b");
//	fwrite(p, sizeof(struct book), count, pbooks);
//	fclose(pbooks);
//}