#include<stdio.h>
#include<stdlib.h>

struct isciler{
	char isim[30];
	char soyisim[20];
	char isebaslangictarihi[20];
	float maas;
	char cinsiyet;
};

void elemanbilgileri(struct isciler *eleman){
	printf("%s  %s  %s  %.2f  %c",(*eleman).isim,(*eleman).soyisim,(*eleman).isebaslangictarihi,(*eleman).maas,(*eleman).cinsiyet);
}
int main(){
	
	struct isciler isci1;
	printf("lutfen calisanin bilgilerini giriniz...\n");
	scanf("%s  %s  %s  %f  %c",&isci1.isim,&isci1.soyisim,
	&isci1.isebaslangictarihi,&isci1.maas,&isci1.cinsiyet);
	struct isciler *isci1adres=&isci1;
	printf("calisan bilgileri\n");
	/*printf("%s  %s  %s  %.2f  %c",(*isci1adres).isim,(*isci1adres).soyisim,
	(*isci1adres).isebaslangictarihi,(*isci1adres).maas,(*isci1adres).cinsiyet);*/
	elemanbilgileri(&isci1);	
	
	return 0;
}
