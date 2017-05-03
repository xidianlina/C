//#include <stdio.h>
//#include <string.h>
//
//#define M 8*sizeof(int) + 1
//
//char* extend(char *source, char *destination);
//char* reverse(char *destination, char *source);
//char* and(char *destination, char *source1, char *source2);
//char* or (char *destination, char *source1, char *source2);
//char* exclusive_or(char *destination, char *source1, char *source2);
//
//int main(int argc, char *argv[])
//{
//	char x[M], y[M], z[M];
//	printf("    x = %s\n", extend(x, argv[1]));//��չ��Mλ��
//	printf("    y = %s\n", extend(y, argv[2]));
//	printf("   ^x = %s\n", reverse(z, x));
//	printf("   ^y = %s\n", reverse(z, y));
//	printf("x & y = %s\n", and (z, x, y));
//	printf("x | y = %s\n", or (z, x, y));
//	printf("x ^ y = %s\n", exclusive_or(z, x, y));
//
//	return 0;
//}
//
//char* extend(char *destination, char *source)//���������ַ�������һ��32λ�����ַ���
//{
//	unsigned int i;
//	for (i = 0; i < M - 1 - strlen(source); i++)
//		destination[i] = '0';
//	destination[i] = '\0';
//	strcat(destination, source);
//	return destination;
//}
//
//char* reverse(char *destination, char *source)//���������ַ��� ��ȡ����
//{
//	char *save = destination;
//	strcpy(destination, source);
//	while (*destination != '\0')
//	{
//		if (*destination == '0')
//			*destination = '1';
//		else 
//			*destination = '0';
//		destination++;
//	}
//	return save;
//}
//
//char* and(char *destination, char *source1, char *source2)//�������������ַ��� ����
//{
//	char *save = destination;
//	while (*source1 != '\0')
//	{
//		if (*source1 == '1' && *source2 == '1')
//			*destination = '1';
//		else
//			*destination = '0';
//		source1++;
//		source2++;
//		destination++;
//	}
//	return save;
//}
//
//char* or (char *destination, char *source1, char *source2)//�������������ַ��� ���
//{
//	char *save = destination;
//	while (*source1 != '\0')
//	{
//		if (*source1 == '1' || *source2 == '1')
//			*destination = '1';
//		else 
//			*destination = '0';
//		source1++;
//		source2++;
//		destination++;
//	}
//	return save;
//}
//
//char* exclusive_or(char *destination, char *source1, char *source2)//�������������ַ��� �����
//{
//	char *save = destination;
//	while (*source1 != '\0')
//	{
//		if (*source1 != *source2)
//			*destination = '1';
//		else 
//			*destination = '0';
//		source1++;
//		source2++;
//		destination++;
//	}
//	return save;
//}