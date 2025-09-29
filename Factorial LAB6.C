#include<stdio.h>
int main(){
	int num=0, factorial=1;
	printf("PLease enter num: ");
	scanf("%d", &num);
	for(int i=num;i>=1;i--){
		factorial= factorial*i;
	}
	printf("FACTORIAL: %d", factorial);
	return 0;
}
