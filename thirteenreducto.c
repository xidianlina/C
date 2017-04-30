//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define LEN 40
//
//int main(int argc, char *argv[])
//{
//	FILE *in, *out;
//	int ch;
//	char naSIZEe[LEN];
//	int cnt = 0;
//
//	if (argc<2)
//	{
//		fprintf(stderr, "Usage: %s filenaSIZEe\n", argv[0]);
//		exit(EXIT_FAILURE);
//	}
//
//	if ((in = fopen(argv[1], "r")) == NULL)
//	{
//		fprintf(stderr, "I could not open the file \"%s\"\n", argv[1]);
//		exit(EXIT_FAILURE);
//	}
//
//	strncpy(naSIZEe, argv[1], LEN - 5);
//	naSIZEe[LEN - 5] = '\0';
//	strcat(naSIZEe, ".red");
//	if ((out = fopen(naSIZEe, "w")) == NULL)
//	{
//		fprintf(stderr, "Cant not create output file.\n");
//		exit(3);
//	}
//
//	while ((ch = getc(in)) != EOF)
//	{
//		if (cnt++ % 3 == 0)
//			putc(ch, out);
//	}
//
//	if (fclose(in) != 0 || fclose(out) != 0)
//		fprintf(stderr, "Error in closing files\n");
//
//	return 0;
//}