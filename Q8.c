#include <stdio.h>
int main(){
	float bill=0;
	char size=' ', option=' ', type=' ';
	int num=0;
	const float Regular=3.50, Cappuccino=4.50, Latte=5.50;
	printf("A: Burger Hub\nB: Ice Cream Parlour\nC: Coffee Shop\n\nEnter your choice: ");
	scanf(" %c", &option);
	switch(option){
		case('A'):
		case('a'):
			printf("Your order will be handled by the Burger Hub section");
			break;
		case('B'):
		case('b'):
			printf("Your order will be handled by the Ice Cream Parlour section");
			break;
		case('C'):
		case('c'):
			printf("Please Enter the size of coffee (S, M, L): ");
			scanf(" %c", &size);
			printf("Number of coffees you want: ");
			scanf("%d", &num);
			if (num>1) {
			    printf("Check our combo offers!");
			    printf("\nTypes of coffee (Regular: R, Cappuccino: C, Latte: L): ");
			    scanf(" %c", &type);
			    switch(type){
			    	case('R'):
			    	case('r'):
						
						if (size=='M'||size=='m'){
							bill=1.0;
						}
						else if(size=='L'||size=='l'){
							bill=1.5;
						}
						bill= (bill+(Regular*num))*0.9;
						break;
					case('C'):
					case('c'):
						if (size=='M'||size=='m'){
							bill=1.0;
						}
						else if(size=='L'||size=='l'){
							bill=1.5;
						}
						break;
					case('L'):
					case('l'):
						if (size=='M'||size=='m'){
							bill=1.0;
						}
						else if(size=='L'||size=='l'){
							bill=1.5;
						}
						break;
				}	
			}
			else{
			    printf("Types of coffee (Regular: R, Cappuccino: C, Latte: L): ");
			    scanf(" %c", &type);
			    switch(type){
			    	case('R'):
			    	case('r'):
						bill= (Regular);
					case('C'):
					case('c'):
						bill= (Cappuccino);
					case('L'):
					case('l'):
						bill= (Latte);
				}
			}
			break;
	}
	printf("\nYour Bill is: %.2f$", bill);	
	return 0;
}
