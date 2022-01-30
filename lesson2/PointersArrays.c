#include <stdio.h>
#include <stdlib.h>

void updateArray1(int array[]){
	array[0] = 10;
	/* 
 	*(array+0) = 10; 
	*/
}
/*can update array using pointer*/
void updateArray2(int* array){
	array[1] = 20;
}

int main(){
	int numbers[3] = {1,2,3};

	updateArray1(numbers);
	updateArray2(numbers);

	printf("sizeof(int): %d\n", sizeof(int));
	printf("\n");

	printf("pointer is %p. Value is %d\n", &numbers[0], numbers[0]);
	printf("pointer is %p. Value is %d\n", &numbers[1], numbers[1]);
        printf("pointer is %p. Value is %d\n", &numbers[2], numbers[2]);

/*we can find the value through pointers
	&numbers[0] is the same as numbers
	&numbers[1] is the same as numbers+1

	numbers[0] is the same as *numbers
	numbers[1] is the same as *(numbers+1)
*/
	printf("pointer is %p. Value is %d\n", numbers, *numbers);
	printf("pointer is %p. Value is %d\n", numbers+1, *(numbers+1));
	printf("pointer is %p. Value is %d\n", numbers+2, *(numbers+2));
	return 0;
}
