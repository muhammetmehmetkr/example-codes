#include <stdio.h>
#include <stdlib.h>
#include <math.h> //sayiyi tersden yazdiran program..

int basamaksayisibul(int sayi){	
	int basamaksayisi=0;
	
	if(sayi>=0){
		do{
		basamaksayisi++;
		sayi=sayi/10;
		}while(sayi>0);
	}
	return basamaksayisi;
}
int tersinibul(int sayi){
	int basamaksayimiz=basamaksayisibul(sayi);
	int dizi[basamaksayimiz];
	int basamaksayisi=0;
	
	do{
		basamaksayisi++;
		dizi[basamaksayisi-1]=sayi%10;
		sayi=sayi/10;		
	}while(sayi>0);
	
	float sayinintersi=0;
	int i;
	
	for(i=0;i<basamaksayimiz;i++){
		sayinintersi=sayinintersi+dizi[i]*pow(10,basamaksayimiz-1-i);
	}
	return sayinintersi;	
}
int main(){	
	int sayi;
	
	printf("lutfen tersini bulmak istediginiz sayiyi giriniz\n");
	scanf("%d",&sayi);
	printf("sayinin tersi %d dir...\n",tersinibul(sayi));
	return 0;
}
