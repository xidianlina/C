//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE 100
//#define SLEN 81
//
//int main(int argc, char *argv[])
//{
//	FILE *fp1, *fp2;
//	char *ret_vala;
//	char *ret_valb;
//	char st[SIZE];
//
//	if ((fp1 = fopen(argv[1], "r")) == NULL)
//	{
//		printf("Can't open %s", argv[1]);
//		exit(1);
//	}
//	if ((fp2 = fopen(argv[2], "r")) == NULL)
//	{
//		printf("Can't open %s", argv[2]);
//		exit(1);
//	}
//	do
//	{
//		if ((ret_vala = fgets(st, SLEN, fp1)) != NULL)
//		{
//			fputs(st, stdout);
//
//		}
//		if ((ret_valb = fgets(st, SLEN, fp2)) != NULL)
//		{
//			fputs(st, stdout);
//		}
//	} while (ret_vala != NULL || ret_valb != NULL);
//
//	fclose(fp1);
//	fclose(fp2);
//
//	return 0;
//}