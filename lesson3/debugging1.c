#include <string.h>
#include <stdio.h>


int add(int a, int b) {
	int r = 0;
	r = a + b;
	return r;
}

int main(void) {
	int junk = 7;
	int i = 0;
	int t[5] = {3, 4, -7, 0, 1};
	char string[10] = "Wonderful";

	printf("Hello, world!\n");
	junk = junk * 8;
	add(junk, 9);
	i = add(7, 8);
}
