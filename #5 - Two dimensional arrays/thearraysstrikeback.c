#include <stdio.h>

int main(){
	int array[2][4] = {
		{11, 12, 13, 14},
		{21, 22, 23, 24}
	};
		//Two rows, four columns
	
	int samearray[2][4] = {11, 12, 13, 14, 21, 22, 23, 24};
		//Same as the array above

	printf("Row 2 column 3 consists of the integer %d\n", array[1][2]);
		//Calling values from the array is confusing as hell and does not work the same way as creating an array

		//You would create an array with the exact number of rows and columns you want, for example, an array with 2 rows and 4 columns would be made with array[2][4].
	
		//However, if you wanted the value from row 1 column 4, you would have to do array[0][3], since the array starts at [0][0].
}
