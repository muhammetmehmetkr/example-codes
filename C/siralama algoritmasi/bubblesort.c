#include<stdio.h>
#include<stdlib.h>
#define MAX 10			//kucukten buyuge siralama..

void bubblesort(int dizi[],int boyut){
	int i,j;
	for(i=0;i<boyut;i++){
		for(j=1;j<boyut-i;j++){
			if(dizi[j-1]>dizi[j]){
				int temp=dizi[j];
				dizi[j]=dizi[j-1];
				dizi[j-1]=temp;
			}
		}
	}
}
int main(){
	int sayilar[MAX],boyut;
	int i;
	
	printf("diziniz kac elemanli olsun?\n");
	scanf("%d",&boyut);
	for(i=0;i<boyut;i++){
		scanf("%d",&sayilar[i]);
	}
	for(i=0;i<boyut;i++){
		printf("%d ",sayilar[i]);
	}
	printf("\n");
	bubblesort(sayilar,boyut);
	for(i=0;i<boyut;i++){
		printf("%d ",sayilar[i]);
	}
		
	return 0;
}
