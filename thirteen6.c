#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 40
char *s_gets(char *st,int n);

int main(void)
{
	FILE *in,*out;
	int ch;
	char name_in[LEN];
	char name_out[LEN];
	int cnt=0;

	fprintf(stdout,"Please enter the input file name:\n");
	s_gets(name_in,LEN);
	fprintf(stdout,"Please enter the output file name:\n");
	s_gets(name_out,LEN);

	if((in=fopen(name_in,"r"))==NULL)
	{
		fprintf(stderr,"Can not open the %s\n",name_in);
		exit(EXIT_FAILURE);
	}

	if((out=fopen(name_out,"w"))==NULL)
	{
		fprintf(stderr,"Can not open the %s\n",name_out);
		exit(EXIT_FAILURE);
	}

	while((ch=getc(in))!=EOF)
	{
		if(cnt++%3==0)
			putc(ch,out);
	}

	if(fclose(in)!=0||fclose(out)!=0)
		fprintf(stderr,"Error in closing files\n");

	return 0;
}

char *s_gets(char *st,int n)
{
	char *ret_val;
	char *find;

	ret_val=fgets(st,n,stdin);
	if(ret_val)
	{
		find=strchr(st,'\n');
		if(find)
			*find='\0';
		else
			while(getchar()!='\n')
				continue;
	}

	return ret_val;
}
