#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int girilensayiadeti,i;
	float sayilar[100];
	float toplam=0,ortalama;
	
	printf("lutfen kac adet sayi girmek istediginizi yaziniz...\n");
	scanf("%d",&girilensayiadeti);
	while(girilensayiadeti>100 || girilensayiadeti<=0){
		printf("lutfen 1-100 arasý deger giriniz...\n");
		printf("lutfen kac adet sayi girmek istediginizi tekrar yaziniz...\n");
		scanf("%d",&girilensayiadeti);		
	}
	for(i=0;i<girilensayiadeti;i++){
		printf("lutfen %d. sayiyi giriniz..\n",i+1);
		scanf("%f",&sayilar[i]);
		toplam+=sayilar[i];		
	}
	ortalama=toplam/girilensayiadeti;
	printf("girilen sayilarin toplami: %.2f\n",toplam);
	printf("girilen sayilarin ortalamasi: %.2f\n",ortalama);
	
	return 0;
}
