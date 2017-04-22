#include <stdio.h>

int main() {
	int array[12]; //defined by brackets; 12 is the size of the array
	array[0] = 12;	//starts at 0, so total 13 values
	array[3] = 172763;
	array[4] = 33.249;
	array[12] = -95;
	
	printf("The 5th value of the array is %d.\n", array[4]);
	return 0; 
}
