//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "twelve3.h"
//
//int main(void)
//{
//	int mode;
//	int present_mode = METRIC;
//	double distance, fuel;
//
//	printf("Enter 0 for metric mode, 1 for US mode : ");
//	scanf("%d", &mode);
//	while (mode >= 0)
//	{
//		set_mode(mode,&present_mode);
//		get_info(mode,present_mode,&distance,&fuel);
//		show_info(present_mode,distance,fuel);
//		printf("Enter 0 for metric mode, 1 for US mode");
//		printf(" (-1 to quit) : ");
//		scanf("%d", &mode);
//	}
//	printf("Done.\n");
//
//	return 0;
//}