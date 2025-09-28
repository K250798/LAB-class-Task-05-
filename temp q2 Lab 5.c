#include <stdio.h>
int main()
{
	int num=0;
	printf("Please enter a number... ");
	scanf("%d", &num);
	(num%2==0)?
	printf("Even"):
	(num%3==0)?
    printf("Divisible by 3"):
    	printf("Odd and not divisible by 3");
    return 0;	
}

