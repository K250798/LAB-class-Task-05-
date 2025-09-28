#include <stdio.h>

int main(){
	float attd=0.0;
    char mid=' ', fee=' ';
	printf("Please enter ur attendance percentage upto 2 decimal without the percentage sign: ");
	scanf("%f", &attd);
	if (attd>=75){
		printf("Have U clreared Mid exam? (P/F): ");
		scanf(" %c", &mid);
	    if (mid=='P' || mid=='p'){
	    	printf("Have you paid the exam fee? (Y/N): ");
	    	scanf(" %c", &fee);
	    	if(fee=='Y'|| fee=='y'){
	    		printf("You are eligible for the Final Exam");
			}
			else{
				printf("Please clear your dues to appear in the Final Exam");
			}
		}
		else{
			printf("You are NOT Eligible!");
		}
	}
	else{
	printf("You are NOT Eligible!");
	}
	return 0;
}
