#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int Number1, Number2;
	float Section, mod;
	
	printf("Enter the 1st number:");
	scanf("%d",&Number1);
	printf("Enter the 2st number:");
	scanf("%d",&Number2);
	
	Section = Number1/Number2;
	mod		= Number1%Number2;
	
	printf(" %d / %d = %.1f mod %.1f \n",Number1, Number2, Section, mod);
	
	
	return 0;
	}
