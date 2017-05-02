//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#define MAX 18
//
//void clear(struct member *p);
//void get_info(struct member *p);
//void cal_average(struct member *p);
//void display(struct member *p);
//
//struct member {
//	char firstname[10];
//	char lastname[10];
//	int bat;
//	int hit;
//	int walk;
//	int RBI;
//	double average;
//};
//
//int main()
//{
//	struct member members[MAX];
//	clear(members);
//	get_info(members);
//	cal_average(members);//计算平均值
//	display(members);
//	return 0;
//}
//
//void clear(struct member *p)
//{
//	int i;
//	for (i = 0; i<MAX; i++)
//	{
//		strcpy(p[i].firstname, "");
//		strcpy(p[i].lastname, "");
//		p[i].bat = 0;
//		p[i].hit = 0;
//		p[i].walk = 0;
//		p[i].RBI = 0;
//		p[i].average = 0;
//	}
//}
//
//void get_info(struct member *p)
//{
//	int number, bat, hit, walk, RBI;
//	char firstname[20], lastname[20], filename[20];
//	FILE *fp;
//
//	printf("input the file name:");
//	scanf("%s", filename);
//	while ((fp = fopen(filename, "r")) == NULL)
//	{
//		printf("Cannot open filename. input again:");
//		scanf("%s", filename);
//	}
//	while (fscanf(fp, "%d %s %s %d %d %d %d\n", &number, firstname, lastname, &bat, &hit, &walk, &RBI) == 7)
//	{
//		strcpy(p[number].firstname, firstname);
//		strcpy(p[number].lastname, lastname);
//		p[number].bat += bat;
//		p[number].hit += hit;
//		p[number].walk += walk;
//		p[number].RBI += RBI;
//	}
//	fclose(fp);
//}
//
//void cal_average(struct member *p)
//{
//	int i;
//	for (i = 0; i<MAX; i++)
//		if (p[i].bat)
//			p[i].average = (float)p[i].hit / (float)p[i].bat;
//}
//
//void display(struct member *p)
//{
//	int i;
//	struct member total = { "", "", 0, 0, 0, 0, 0 };
//	printf("%7s%10s%10s%5s%5s%5s%5s%10s\n", "number", "firstname", "lastname", "bat", "hit", "walk", "RBI", "average");
//	for (i = 0; i<MAX; i++)
//		if (p[i].bat)
//		{
//			printf("%7d%10s%10s%5d%5d%5d%5d%10g\n", i, p[i].firstname, p[i].lastname, p[i].bat, p[i].hit, p[i].walk, p[i].RBI, p[i].average);
//			total.bat += p[i].bat;
//			total.hit += p[i].hit;
//			total.walk += p[i].walk;
//			total.RBI += p[i].RBI;
//		}
//	if (total.bat) 
//		total.average = (float)total.hit / (float)total.bat;
//	printf("%27s%5d%5d%5d%5d%10g\n", "total team", total.bat, total.hit, total.walk, total.RBI, total.average);
//}