#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	double array1[3] = {1.5, 2.3, 4.5};
	char array3[6] = {'h', 'e', 'l', 'l', 'o'};
	char array4[] = "Hello world!";

	/*printf("%f\n", array1);*/
	printf("%s %s\n", array3, array4);


        int array[3] = {200, 41, 99};
	/*
	array[0] = 200;
	array[1] = 41;
	array[2] = 99;
	*/


        for ( int i = 0; i < 3; i++){
                array[i] = i*100;
        }

	for ( int i = 0; i < 3; i++){
		printf("%d\n", array[i]);
	}
	
	return 0;

}
