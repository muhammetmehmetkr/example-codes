#include <stdio.h>
#include <stdlib.h>

		// 1-1000 arasında asal sayılar...
int prime(int number){
	int i;
	
	if(number==1){
		return 0;
	}
	for(i=2;i<number;i++){
		if(number%i==0){
			return 0;
		}
	}
	return 1;
}

int main() {
	int counter=0;
	int i;
	for(i=1;i<=1000;i++){	
		if(prime(i)==1){
			printf("%d it is prime number...\n",i);
			counter++;		
		}
	}
	printf("\n");
	printf("result: there are %d prime number...\n",counter);
	return 0;
}
