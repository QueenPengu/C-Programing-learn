#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	float FloatNumber1, FloatNumber2, Product;
	
	printf("Please enter the 1st Float number:");
	scanf("%f",&FloatNumber1);

	printf("Please enter the 2st Float number:");
	scanf("%f",&FloatNumber2);
	
	Product = FloatNumber1 * FloatNumber2;
	
	printf("Result: %f \n",Product);
	
	return 0;
	}
