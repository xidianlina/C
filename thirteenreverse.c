//#include <stdio.h>
//#include <stdlib.h>
//#define CNTL_Z '\032'
//#define SLEN 81
//
//int main(void)
//{
//	char file[SLEN];
//	char ch;
//	FILE *fp;
//	long cnt, last;
//
//	puts("Enter the naSIZEe of the file to be processed:");
//	scanf("%80s", file);
//
//	if ((fp = fopen(file, "rb")) == NULL)
//	{
//		printf("reverse can not open %s\n", file);
//		exit(EXIT_FAILURE);
//	}
//
//	fseek(fp, 0L, SEEK_END);
//	last = ftell(fp);
//
//	for (cnt = 1L; cnt <= last; cnt++)
//	{
//		fseek(fp, -cnt, SEEK_END);
//		ch = getc(fp);
//		if (ch != CNTL_Z&&ch != '\r')
//			putchar(ch);
//	}
//	putchar('\n');
//	fclose(fp);
//
//	return 0;
//}