#include<stdio.h>
int main(){
	
	int amount=0, pin=0, key=1234;
	int balance=50000;
	printf("Please enter the 4 digit pin: ");
	scanf("%d", &pin);
	if (pin==key){
		printf("Enter withdrawal amount: ");
	    scanf("%d", &amount);
	    if (amount> balance){
		    printf("Insufficient Balance");
	    }
	    else{
		    balance=balance-amount;
	     	printf("Your remaining balace is: %d$", balance);
    	}
	}
	else{
		printf("WRONG PIN!");
	}
	
	
}
