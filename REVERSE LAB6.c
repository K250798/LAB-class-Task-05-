#include <stdio.h>
int main(){
	int static num, num2=0;
	printf("Please enter number: ");
	scanf("%d", &num);
	while(num!=0){
		num2=num2*10+(num%10);
		num=num/10;	
	}
	printf("Your Reverse is: %d", num2);
	return 0;
}
