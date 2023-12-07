#include<stdio.h>
#include<stdlib.h>

int main(){

	/*int sayi;
	
	printf("lutfen sayi giriniz\n");
	scanf("%d",&sayi);
	
	int *sayininadresi;
	sayininadresi = &sayi;
	printf("%d  %x\n",*sayininadresi,sayininadresi);   // *sayininadresi -> sayinin adresine git sayiyi al anlamina geliyor..
	printf("%d  %x",sayi,&sayi);*/			// sayinin adresini yazdirmak icin %x kullanilir..
	
	
	int sayilar[6]={10,20,30,40,50,90};

	int *sayilarinadresi;	
	sayilarinadresi = &sayilar[0];

	printf("%d\n",*(sayilarinadresi));
	printf("%d\n",*(sayilarinadresi+1));
	printf("%d\n",*(sayilarinadresi+2));
	printf("%d\n",*(sayilarinadresi+3));
	printf("%d\n",*(sayilarinadresi+4));
	printf("%d\n",*(sayilarinadresi+5));
	
	printf("%d\n",&sayilarinadresi[6]);
		
	return 0;
}
