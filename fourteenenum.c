//#include <stdio.h>
//#include <string.h>
//#include "gets.h"
//
//enum spectrum{red,orange,yellow,green,blue,violet};
//const char *colors[] = { "red","orange","yellow","green","blue","violet" };
//
//#define LEN 30
//
//int main(void)
//{
//	char choice[LEN];
//	enum spectrum color;
//	_Bool color_is_found = 0;
//
//	puts("Enter a color (empty line to quit):");
//	while (s_gets(choice, LEN) != NULL&&choice[0] != '\0')
//	{
//		for (color = red; color <= violet; color++)
//		{
//			if (strcmp(choice, colors[color]) == 0)
//			{
//				color_is_found = 1;
//				break;
//			}
//		}
//		if (color_is_found)
//			switch (color)
//			{
//			case red:
//				puts("Roses are red.");
//				break;
//			case orange:
//				puts("Poppies are orange.");
//				break;
//			case yellow:
//				puts("Sunflowers are yellow.");
//				break;
//			case green:
//				puts("Grass is green.");
//				break;
//			case blue:
//				puts("Bluebells are blue.");
//				break;
//			case violet:
//				puts("Violets are violet.");
//				break;
//			}
//		else
//			printf("I don't know about the color %s.\n", choice);
//		color_is_found = 0;
//		puts("Next color,please (empty line to quit):");
//	}
//	puts("Goodbye!");
//
//	return 0;
//}