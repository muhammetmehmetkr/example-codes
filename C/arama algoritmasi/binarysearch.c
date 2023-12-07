#include<stdio.h>
#include<stdlib.h>

int binarysearch(int dizi[],int min,int max,int aranandeger){
	while(min<=max){
		int medium=min+(max-min)/2;
		if(dizi[medium]==aranandeger)
			return medium;
		if(dizi[medium]<aranandeger)
			min=medium+1;
		else
			max=medium-1;		
	}
	return -1;
}

int main(){
	int sayilar[]={2,5,7,14,24,36,67};
	int boyut=sizeof(sayilar)/sizeof(int);
	int aranilansayi;
		printf("indeksini ogrenmek istediginiz sayiyi giriniz\n");
		scanf("%d",&aranilansayi);
		
		int aramasonucu=binarysearch(sayilar,0,boyut-1,aranilansayi);
		if(aramasonucu>=0){
			printf("aradiginiz sayi %d. indekstedir\n",aramasonucu);
		}
		else{
			printf("aradiginiz sonuc bulunmamaktadir\n");
		}	
	
	return 0;
}
