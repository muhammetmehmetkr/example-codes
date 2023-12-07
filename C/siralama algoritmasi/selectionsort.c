#include<stdio.h>
#include<stdlib.h>
#define MAX 10

void selectionsort(int dizi[],int boyut){
	int i,j;
	int minimum;
	for(i=0;i<boyut;i++){
		minimum=i;
		for(j=i;j<boyut;j++){
			if(dizi[j]<dizi[minimum]){
				minimum=j;
			}		
		}
	
		int temp=dizi[i];
		dizi[i]=dizi[minimum];
		dizi[minimum]=temp;
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
	selectionsort(sayilar,boyut);
	for(i=0;i<boyut;i++){
		printf("%d ",sayilar[i]);
	}
	
	return 0;
}
