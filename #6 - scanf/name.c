#include <stdio.h>

int main() {
	char name[2][256];
	
	printf("What is your first name?: ");
	scanf("%s", name[0]);
	printf("What is your last name?: ");
	scanf("%s", name[1]);
	printf("Your name is %s %s\n", name[0], name[1]);
	return 0;
}
