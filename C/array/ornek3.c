#include <stdio.h>
#include <stdlib.h>
	/* 1 2 3
	   4 5 6				matris yazd�rma
	   7 8 9  */	
int main(){
	
	int matris[3][3];
	int i,j;
	
	printf("enter 9 number:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&matris[i][j]);
		}
	}	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",matris[i][j]);	
		}
		printf("\n");	
	}
	
/*	int matris[3][3]={{1,2,3},{4,5,6},{7,8,9}};		// 3-3 �n anlam� 3 sat�r 3 s�tun..		
	int i,j;									// i sat�r j s�tun..
	
for(i=0;i<3;i++){
	for(j=0;j<3;j++){
	printf("%d ",matris[i][j]);	
}
	printf("\n");	
}
*/		
	return 0;
}
