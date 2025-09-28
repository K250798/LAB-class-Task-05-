#include<stdio.h>
int main(){
	int x=2, y=4, z=6;
	printf("LET x=2, y=4, z=6");
	printf("\nStep1= y %% z: %d", y%z );
	printf("\nStep2= !(step1): %d",!(y%z) );
	printf("\nStep3= y * z: %d", y*z );
	printf("\nStep4= x + Step3: %d", x+y*z);
	printf("\nStep5= x - z: %d",x-z);
	printf("\nStep6= Step5 < y: %d", x-z<y );
	printf("\nStep7= Step4 > 10: %d", x+y*z>10);
	printf("Result1= Step7 && Step6: %d ", x+y*z>10&&x-z<y);
	printf("If Result1 is 1; the value 1 gets output\nelse due to ||:\n");
	printf("Result2= Step7 && Step2: %d", x+y*z>10&&!(y%z));
	printf("\nWhatever 0 or 1 value of Result2 is, becomes Output");
	printf("\nFinal Result: %d", x + y * z > 10 && x - z < y || !(y % z));
	
}
