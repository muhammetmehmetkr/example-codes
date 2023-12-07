#include <stdio.h>
#include <stdlib.h>				
					
int main() {				//    1 2 3 4 5 		3 sütun 5 satýr matris olusturma..		
	int matris[3][3];		 //   1 2 3 4 5 		yukarýdan aþaðýya toplam..
	int i,j;				//	  1 2 3 4 5 
	int sum;
	
	for(i=0;i<3;i++){						// döngü soldan saða akar..
		for(j=0;j<3;j++){
			scanf("%d",&matris[i][j]);		
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d  ",matris[i][j]);
		}
		printf("\n");     
	}

	printf("\n");		
	for(j=0;j<3;j++){				//yukarýdan aþaðýya olsun diye..
		for(i=0;i<3;i++){
			sum+=matris[i][j];			
		}
		printf("%d ",sum);
		sum=0;
	}
	/*for(j=0;j<3;j++){				//yukarýdan aþaðýya olsun diye..
		for(i=0;i<3;i++){
			sum+=matris[i][j];			
		}
	}*/
	//printf("%d\n",sum);
		
	return 0;
}
