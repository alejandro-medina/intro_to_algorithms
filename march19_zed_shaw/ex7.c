#include <stdio.h>

int main(int argc, char *argv[]) {

	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at the rate of %f.\n", bugs, bug_rate);

	// warning  por sobrepasar el tamaño del unisdeg long	
	// warning: integer overflow in expression [-Woverflow]
	//  unsigned long universe_of_defects = 1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L;
	// unsigned sirva para: valores positivos

	long universe_of_defects = 1L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L * 1024L;
	printf("The entire universe has %l bugs.\n", universe_of_defects);

	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);

	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That's only a %f portion of the universe.\n", part_of_universe);

	char null_byte = '\0';
	int care_percentage = bugs * null_byte;
	printf("which means you should care %d%%.\n", care_percentage);

	return 0;

}
