#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int even(int number){
	if(number%2==0){
		printf("%d is an even integer\n\n",number);
		return 1;
	}
	else{
		printf("it is odd integer\n\n");
		return 0;
	}

}
int main() {
	int number,i;
	
	for(i=0;true;i++){
		printf("enter integer(-1 to end)\n");
		scanf("%d",&number);
		if(number==-1){
			break;
		}
		even(number);
	}
	
		
	return 0;
}
