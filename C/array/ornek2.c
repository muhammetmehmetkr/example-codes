#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float result=0;
	float number[5];
	int i;
	
	for(i=0;i<5;i++){
		printf("enter fractional number:");
		scanf("%f",&number[i]);
		result+=number[i];			
	}
	printf("result is: %.2f\n",result/5);
	
	
	return 0;
}
