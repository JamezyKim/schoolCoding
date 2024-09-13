#include <stdio.h>


void addOneToAll(int* array, unsigned int size) {
	for (int i = 0; i < size; i++) {
		array[i] += 1;
	}
}

int main() {

	//printf("hello");
	char* arr = "hi";

	//create a 1D int array
	int myIntArray[5] = { 97, 98, 99, 100, 101 };

	//print the content of the array using a for-loop
	printf("Printing the array using a for-loop\n");
	for (int i = 0; i < 5; i++) {
		printf(" %d", myIntArray[i]);
	}
	printf("\n");

	//print the content of the array using a while-loop
	printf("Printing the array using a while-loop\n");
	int index = 0;
	while (index < 5) {
		printf(" %c", myIntArray[index]);
		index++;
	}
	printf("\n");

	return 0;
}