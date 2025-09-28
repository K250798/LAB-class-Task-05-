#include <stdio.h>
int main(){
	float time=0;
	char signal=' ';
	printf("Time: ");
	scanf("%f", &time);
	printf("Signal: ");
	scanf(" %c", &signal);
	switch(signal){
		case'R':
		case'r':
			if (time<22.00){
		        printf("\nStop and wait");
		        break;
	        }
	        else if(time>=22.00&&time<=24.00){
	        	printf("\nStop, but night caution allowed");
	        	break;
			}
			break;
        case 'Y':
        case 'y':
        	printf("\nGet Ready");
        case 'G':
		case 'g':
			printf("\nGo");
		default:
			printf("\nInvalid Signal");
	}
}
