//#include <stdio.h>
//
//int rotate_l(unsigned int number, unsigned int bit);
//
//int main(void)
//{
//	unsigned int number, bit;
//	printf("input a hexadecimal number and rotated bits number (q to quit):");
//	while (scanf("%x%d", &number, &bit) == 2)
//	{
//		printf("%x rotate %d bit left : %x\n", number, bit, rotate_l(number, bit));
//		printf("input a number(q to quit):");
//	}
//	printf("quit\n");
//
//	return 0;
//}
//
//int rotate_l(unsigned int number, unsigned int bit)
//{
//	unsigned int i;
//	unsigned int hign = 8 * sizeof(unsigned int);//×î¸ßÎ»
//	for (i = 0; i<bit; i++)
//		if (number&(1 << (hign - 1)))
//			number = (number << 1) | 1;
//		else
//			number = number << 1;
//
//	return number;
//}