#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int sayi;
	int buyuksayi;
	int i;
	
	printf("lutfen 5 adet sayi giriniz...\n");
	for(i=0;i<5;i++){
		scanf("%d",&sayi);		
		
		if(i==0){
			buyuksayi=sayi;
		}
		if(buyuksayi<sayi){
			buyuksayi=sayi;
		}
	}
	printf("girmis oldugunuz en buyuk sayi: %d",buyuksayi);
	
	return 0;
}
