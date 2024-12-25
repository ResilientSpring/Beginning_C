#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Hourse {

	struct Date {

		int day;
		int month;
		int year;

	} dob;

	int height;
	char name[20];
	char father[20];
	char mother[20];

};

// We can declare unnamed (anonymous) structures within another structure (or union).
struct Hourse2 {

	char owner[9];

	// Anonymous struct
	struct {

		int age;
		char height;

	};

};


int main() {

	struct Hourse2 rocinante;

	rocinante.age = 55;
	rocinante.height = 13;

	strcpy(rocinante.owner, "Quixote");

	printf("age: %d, height: %d, owner: %s.\n", rocinante.age, rocinante.height, rocinante.owner);

	return 0;
}