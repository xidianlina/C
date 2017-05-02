//#include <stdio.h>
//
//struct names {
//	char fname[20];
//	char mname[20];
//	char lname[20];
//};
//
//struct persons {
//	int number;
//	struct names name;
//};
//
//struct persons person[5] = {
//	{ 1402121214,{ "Dirbble","Mackede","Flossie" } },
//	{ 1402121245,{ "Gadenfs","Kasdfaa","Pszaj" } },
//	{ 1402121456,{ "Kakadk","","Mjkdka" } },
//	{ 1402124569,{ "Tdakda","Ukdjkj","Ekdkjk" } },
//	{ 1406451291,{ "Bsdjk","Fdlkjja","Rkjdka" } }
//};
//
//void display(struct persons *);
//
//int main(void)
//{
//	display(person);
//	return 0;
//}
//
//void display(struct persons p[5])
//{
//	int i;
//	for (i = 0; i < 5; i++)
//		if (p[i].name.mname[0] != '\0')
//			printf("%s, %s, %c. -- %d\n", p[i].name.fname, p[i].name.lname, p[i].name.mname[0], p[i].number);
//		else
//			printf("%s, %s      --%d\n", p[i].name.fname, p[i].name.lname, p[i].number);
//}