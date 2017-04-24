//#include <stdio.h>
//void interchange(int *u, int *v);
//int main(void)
//{
//	int x = 5, y = 10;
//
//	printf("Originally x = %d and y = %d.\n", x, y);
//	printf("%d\n", *&x);
//	interchange(&x, &y);
//	printf("Now x = %d and y = %d.\n", x, y);
//
//	return 0;
//}
//
//void interchange(int *u, int *v)
//{
//	int temp;
//	printf("%p %p\n", u, v);
//	temp = *u;
//	printf("*u = %d\n", *u);
//	*u = *v;
//	*v = temp;
//}