#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main() {
	
	int n,fact;
	fact=1;
		
	printf("Please enter positive integer:\n");
	scanf("%d",&n);
	if(n<0){
		printf("Enter positive integer: 0\n");
		scanf("%d",&n);
	}
	while(n!=0){
		
		fact=fact*n;
		n--;
		
	}	
	printf("result is: %d\n",fact);
	
	
	
	
	
	return 0;
}
