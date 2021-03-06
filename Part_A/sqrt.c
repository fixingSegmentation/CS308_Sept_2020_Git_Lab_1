/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

// The main function starts here.
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("NEGSUPPORT:Usage: ./sqrt input\n");
		exit(-1);
	}
	
	// Checking whether input is a number or not.
	int len = strlen(argv[1]);
	if (len==1 && argv[1][0]=='-') {
		printf("NEGSUPPORT:Input is not a valid number.\n");
		exit(-1);
	}
	if (!(argv[1][0]=='-' && len>1) && !argv[1][0]) {
		printf("NEGSUPPORT:Input is not a valid number.\n");
		exit(-1);
	}
	for (int i = 1; i<len; i++) {
		if (!isdigit(argv[1][i])) {
			printf("NEGSUPPORT:Input is not a valid number.\n");
			exit(-1);
		}
	}

	int input = atoi(argv[1]);
	// Handling negative numbers
	if (input<0) {

		printf("NEGSUPPORT:Sqrt of %d is %fi\n",input,sqrt(-1*input));
	}
	else {
		printf("NEGSUPPORT:Sqrt of %d is %f\n",input,sqrt(input));
	}
	printf("NEGSUPPORT:End of program. Exiting.\n");
	return(0);

} // end main