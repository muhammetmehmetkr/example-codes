#include <stdio.h>
#include <stdlib.h>

		// line: satır column:sütun..

int main() {
	
	int i,j,number;
	
	printf("enter integer value\n");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=number;i++){
		for(j=number-i;j>=0;j--){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
