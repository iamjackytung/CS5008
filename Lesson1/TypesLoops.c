#include <stdio.h>

int main(){
	int accountId = 5;
	double accountBalance = 100.53;
	char accountType = 'C';
	printf("AccountID is: %d\n", accountId);
	printf("AccountBL is: %f\n", accountBalance);
	printf("AccountTY is: %c\n", accountType);
	
	printf("sizeof(int): %d\n", sizeof(int));
	printf("sizeof(double): %d\n", sizeof(double));
	printf("sizeof(char): %d\n", sizeof(char));

	
	int counter = 0;
	while ( counter < 5 ){
		printf("%d ", counter);
		counter = counter + 1;
	}
	
	printf("\n");
	
	for(int i = 0; i < 5; i++){
		printf("%d ", i);
	}

	printf("\n");
	return 0;
}
