#include<stdio.h>
#include<stdlib.h>		//pointer example

int takecube(int *number){
	int result;
	result=(*number)*(*number)*(*number);
	return result;
}

int main(){
	
	int number;
	
	printf("enter integer value\n");
	scanf("%d",&number);
	
	printf("the original number is %d\n",number);
	
	printf("the new value %d",takecube(&number));
	return 0;
}
