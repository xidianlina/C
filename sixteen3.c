//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <math.h>
//
//#define PI 4*atan(1)
//
//struct polar {
//	double magnitude;
//	double angle;
//}POLAR;
//
//struct rect {
//	double x;
//	double y;
//}RECT;
//
//struct rect polar_to_rect(struct polar);
//
//int main(void)
//{
//	puts("Please enter magnitude and angle(in degress),(enter q to quit):");
//	while (scanf("%lf%lf", &POLAR.magnitude, &POLAR.angle) == 2)
//	{
//		RECT = polar_to_rect(POLAR);
//		printf("x = %g,y = %g\n", RECT.x, RECT.y);
//		puts("Please enter magnitude and angle(in degress),(enter q to quit):");
//	}
//	puts("Bye!");
//
//	return 0;
//}
//
//struct rect polar_to_rect(struct polar p)
//{
//	struct rect r;
//	r.x = p.magnitude*cos(p.angle*PI / 180);
//	r.y = p.magnitude*sin(p.angle*PI / 180);
//
//	return r;
//}