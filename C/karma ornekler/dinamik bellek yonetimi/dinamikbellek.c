#include<stdio.h>
#include<stdlib.h>  //malloc-calloc-realloc-free fonksiyonlari..


int main(){
	
	char** cokboyutludizi;		//adresin adresi
	cokboyutludizi=malloc(sizeof(char*)*3); //kac adet kelime kullanilacagini belirtmek icin.
	
	int i;
	for(i=0;i<3;i++){
		cokboyutludizi[i]=malloc(10*sizeof(char));
	}
	cokboyutludizi[0]="mehmet";
	cokboyutludizi[1]="mehmet";
	cokboyutludizi[2]="mehmet";
	for(i=0;i<3;i++){
		printf("%s\n",cokboyutludizi[i]);
	}
	
	
	/*int *sayidizisi=calloc(4,sizeof(int));  //calloc -> clear allocation;butun degerleri sifirlar,ama icindeki indexlere deger atayabiliriz.
	sayidizisi[0]=5;
	sayidizisi[1]=10;
	sayidizisi[2]=15;
	sayidizisi[3]=20;
	
	int i,toplam=0;
	for(i=0;i<4;i++){
		toplam+=sayidizisi[i];
	}
	printf("%d",toplam);*/
	
	/*char *karakterdizisi=calloc(4,sizeof(char));
	karakterdizisi[0]='K';
	karakterdizisi[1]='I';
	karakterdizisi[2]='R';
	
	int i;
	for(i=0;i<3;i++){
		printf("%c",karakterdizisi[i]);
	}*/
		
	return 0;
}
