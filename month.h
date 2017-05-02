#pragma once
#include <stdio.h>

struct month {
	char name[10];
	char abbrev[4];
	int days;
	int monumb;
};

struct month months[12] = {
	{ "January","jan",31,1 },
	{ "February","feb",28,2 },
	{ "March","mar",31,3 },
	{ "April","apr",30,4 },
	{ "May","may",31,5 },
	{ "June","jun",30,6 },
	{ "july","jul",31,7 },
	{ "August","aug",31,8 },
	{ "September","sep",30,9 },
	{ "October","oct",31,10 },
	{ "November","nov",30,11 },
	{ "December","dec",31,12 }
};