#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main() {
	
	int n,i;
	int fact;
	
for(i=n;true;i--){
	fact=1;					// her farklý sayý girildiðinde fact=1 olacak böylece eski sonucu yeni sonuç ile çarpmayacak..
	printf("enter positive integer:\n");
	scanf("%d",&n);
	
	if(n<0){
		break;		
	}
	else if(n==0){
		printf("result is: 1\n\n");
	}
	else{
	
	while(n!=1){
		
		fact=fact*n;
		n--;
	}
		printf("result is: %d\n\n",fact);	
	}
}
	return 0;
}
