//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include "twelve3.h"
//
//void set_mode(int mode,int *present_mode)
//{
//	if (mode == METRIC || mode == US)
//		present_mode = mode;
//	else
//		printf("Invalid mode specified. Mode %s used.\n",
//			present_mode == METRIC ? "0(METRIC)" : "1(US)");
//}
//
//void get_info(int mode,int present_mode,double *distance,double *fuel)
//{
//	if (present_mode == METRIC)
//	{
//		printf("Enter distance traveled in kilometers: ");
//		scanf("%lf", &distance);
//		printf("Enter fuel consumed in liters: ");
//		scanf("%lf", &fuel);
//	}
//	else
//	{
//		printf("Enter distance traveled in miles: ");
//		scanf("%lf", &distance);
//		printf("Enter fuel consumed in gallons: ");
//		scanf("%lf", &fuel);
//	}
//}
//
//void show_info(int present_mode,int distance,int fuel)
//{
//	if (present_mode == METRIC)
//		printf("Fuel consumption is %.1lf liters per 100 km.\n", fuel / (distance / 100));
//	else
//		printf("Fuel consumption is %.1lf miles per gallon.\n", distance / fuel);
//}