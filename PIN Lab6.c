#include <stdio.h>
int main(){
	int const key=2025;
	int pin;
	printf("Enter your pin: ");
	scanf("%d", &pin);
	while (pin!=key){
		printf("\nWRONG PIN!\nRe-Enter your pin: ");
	    scanf("%d", &pin);
	}
	printf("PIN is Correct");
}
