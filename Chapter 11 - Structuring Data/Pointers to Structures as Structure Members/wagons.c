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

	Horse* first = NULL;
	Horse* current = NULL;
	Horse* previous = NULL;

	char test = '\0';   // Test value for ending input.

	for (;;) {

		printf_s("Do you want to enter details of a%s (Y or N)? \n", first != NULL ? "nother" : "");

		scanf_s(" %c", &test, sizeof(test));

		if (tolower(test) == 'n')
			break;

		// Allocate memory for a Horse structure.
		current = (Horse*)malloc(sizeof(Horse));
	}

}