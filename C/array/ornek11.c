#include <stdio.h>
#include <stdlib.h>

	//sayýsal lotoda sayýlar 0 ile 50 arasýndadýr..

int main() {
	
	int random,i;
	int loto[49]={0};
	srand(time(0));   		//olusacak sayýnýn farklý olmasýný saðlar..
	
	printf("sayilar uretiliyor..\n");
	
	for(i=0;i<6;i++){
		random=1+rand()%49;				// +1 vermemin sebebi sonucu 0 ile 49 arasýnda almamasý için..
		while(loto[random-1]==1){
			random=1+rand()%49;		
		}
		loto[random-1]=1;
		printf("%d  ",random);
	}
	printf("\n");
	
	for(i=0;i<49;i++){
		printf("%d ",loto[i]);
	}
	printf("\nsayisal loto cekimi tamamlandi..\n");	
	
	return 0;
}
