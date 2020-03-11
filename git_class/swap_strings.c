#include <stdio.h>

void swap_strings(char **str1, char **str2) {

	char *temp = *str1;
	*str1 = *str2;
	*str2 = temp;

}

void main() {

	char *str1 = "String one";
	char *str2 = "String two";

	swap_strings(&str1, &str2);

	printf("String 1 is '%s' and string 2 is '%s'\n", str1, str2);

}
