#include <stdio.h>
#include <stdlib.h>

int main() {
	int array[3][2];
	int j,i;
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("enter values..\n");
			scanf("%d",&array[i][j]);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

