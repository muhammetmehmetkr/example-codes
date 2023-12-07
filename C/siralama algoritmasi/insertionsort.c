#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void insertionsort(int dizi[],int boyut){
	int i,j;
	int eleman;
	int oncesi;
	for(i=1;i<boyut;i++){
		eleman=dizi[i];
		oncesi=i-1;
		while(oncesi>=0 && dizi[oncesi]>eleman){
			dizi[oncesi+1]=dizi[oncesi];
			oncesi--;
		}
		dizi[oncesi+1]=eleman;
	}	
}

int main(){	
	int sayilar[MAX],boyut;
	int i;
	
	printf("diziniz kac elemanli olsun: ");
	scanf("%d",&boyut);
	for(i=0;i<boyut;i++){
		scanf("%d",&sayilar[i]);
	}
	for(i=0;i<boyut;i++){
		printf("%d ",sayilar[i]);
	}
	printf("\n");
	insertionsort(sayilar,boyut);
	for(i=0;i<boyut;i++){
		printf("%d ",sayilar[i]);
	}
	
	return 0;
}
