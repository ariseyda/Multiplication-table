#include<stdio.h>
#include<math.h>

//Receive an integer from user and print a multiplication table -from 1 to 10- for the entered value.

int main(){
	
	int n,i;

	
	printf("Please enter a number:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		printf("%d x %d=%d\n",n,i,n*i);
	}
	
	
	return 0;
}

