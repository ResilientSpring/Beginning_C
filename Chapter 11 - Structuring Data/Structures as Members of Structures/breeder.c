struct Date {

	int day;
	int month;
	int year;

};

typedef struct Date Date;

typedef struct Hourse Hourse;

struct Hourse {
	 
	Date dob;   // date of birth
	int height;
	char name[20];
	char father[20];
	char mother[20];

};

int main() {
	
	Hourse dobbin;

	dobbin.height = 14;

	dobbin.dob.day = 5;

	dobbin.dob.month = 12;

	dobbin.dob.year = 1962;
}