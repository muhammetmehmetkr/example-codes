#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int x;
	
	printf("enter integer..\n");
	scanf("%d",&x);
	
	if(0==x%2){
		printf("number is even..\n");
	}
	else if(x%2!=0){					// != anlam� e�it deil ise
		printf("number is odd..");
	}
	
	
	
	
	
	
	
	return 0;
}
