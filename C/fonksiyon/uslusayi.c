#include <stdio.h>
#include <stdlib.h>

int intpower(int base,int exponent){
	int result=1,i;	
	
	for(i=0;i<exponent;i++){
		result*=base;
	}
	printf("result is: %d\n\n",result);
	
	return result;	
}
int main(){
	int x,y,i;
		
	for(i=0;1;i++){
		printf("enter two integer:\n");
		scanf("%d%d",&x,&y);	
		intpower(x,y);
}
	return 0;
}
