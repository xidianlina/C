#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ch;
	FILE *fp;
	unsigned long cnt=0;
	char filename[81];

	printf("Please enter filename : ");
	scanf("%s",filename);

	if((fp=fopen(filename,"r"))==NULL)
	{
		printf("Can not open %s\n",filename);
		exit(EXIT_FAILURE);
	}


	while((ch=getc(fp))!=EOF)
	{
		putc(ch,stdout);
		cnt++;
	}

	fclose(fp);
	printf("File %s has %lu characters\n",filename,cnt);

	return 0;
}
