#include <stdio.h>
int main(){
	int a=2, b=4;
	printf("BINARY VALUE OF a and b:\n	a=00000010\n	b=00000100\n");
	printf("(a&b): \n00000010\n00000100\n-----------------\n00000000\n\n");
	printf("(a^b): \n00000010\n00000100\n-----------------\n00000110\n\n");
	printf("(a&b)|(a^b): \n00000000\n00000110\n---------------\n00000110\n\n");
	printf("128 64 32 16 8 4 2 1\n");
	printf(" 0  0  0  0  0 1 1 0\n\n");
	printf("(a & b) | (a ^ b)= %d\n2+4=6\na+b=6\n PROVED!", (a & b) | (a ^ b) );
	return 0;
}
