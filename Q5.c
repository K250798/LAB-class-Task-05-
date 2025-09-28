#include <stdio.h>

int main(){
	int mark1=0, mark2=0, mark3=0, high=-1;
	printf("Enter marks of student1: ");
	scanf("%d", &mark1);
	printf("Enter marks of student2: ");
	scanf("%d", &mark2);
	printf("Enter marks of student3: ");
	scanf("%d", &mark3);
	
	high=mark1>mark2?
	    (mark1>mark3?
	        mark1:mark3)
	    
		:(mark2>mark3?
	        mark2:mark3);
	        
		      
	printf("\nHighest Marks: %d", high);
	return 0;
}
