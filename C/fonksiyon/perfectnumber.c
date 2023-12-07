#include <stdio.h>
#include <stdlib.h>				
												
int perfect(int number){				// 1-1000 arası perfect number...
	int i;
	int sum=1;

	if(number==1){
		return 0;
	}
	for(i=2;i<=number/2;i++){
		if(number%i==0){
			sum+=i;
		}		
	}	
	if(sum==number){
		return 1;
	}
	else{
		return 0;
	}
}
int main() {	
	int i;
	
	for(i=1;i<=1000;i++){
		if(perfect(i)==1){
			printf("%d is perfect number...\n",i);
		}
	}
	
	return 0;
}
