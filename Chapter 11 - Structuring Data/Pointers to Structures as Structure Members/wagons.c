// Program 11.4 Daisy chaining the hourses

#define __STDC_WANT_LIB_EXT1__ 1
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct Horse Horse;

struct Horse {

	int age;
	int height;
	char name[20];
	char father[20];
	char mother[20];
	Horse* next;

};

int main(void) {



}