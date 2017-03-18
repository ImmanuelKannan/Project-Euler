#include <stdio.h>
#include <stdbool.h>

bool is_multiple_of_3(int i);
bool is_multiple_of_5(int i);

int main(void) {

	int sum = 0;

	for (int i = 0; i < 1000; i++) {
		if ((is_multiple_of_3(i)) == true || (is_multiple_of_5(i)) == true) {
			sum += i;
		}
	}

	printf("Sum = %i\n", sum);

}

// Checks if the argument passed is 
// a multiple of 3
bool is_multiple_of_3(int i) {

	if ((i % 3) != 0) {
		return false;
	}

	else {
		return true;
	}

}

// Checks if the argument passed is 
// a multiple of 5
bool is_multiple_of_5(int i) {
	
	if ((i % 5) != 0) {
		return false;
	}

	else {
		return true;
	}

}