#include<stdio.h>
#include<stdlib.h>

int main(void){
	
	int x,y,z;
	
	printf("Enter the 1st number:");
	scanf("%d",&x);
	printf("Enter the 1st number:");
	scanf("%d",&y);
	
	printf("\n*************************\n");
	
	printf("The value of x and y before they were changed.\n");
	
	printf("X: %d\nY: %d\n",x,y);
	
	z = x;
	x = y;
	y = z;
	
	printf("\n*************************\n");
	printf("Values ​​of x and y after changing.\n");
	
	printf("X: %d\nY: %d\n",x,y);
	
	return 0;
	}
