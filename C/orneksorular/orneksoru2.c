#include<stdio.h>
#include<stdlib.h>
// 30 tane tam sayi tutan bir dizi
// 1000-2000 arasinda deger atanacak
// yuzler basamagi 3 veya 5 olan sayilarin toplami ve adedini veren program...
int main(){
    
    int sayilar[30];
    int toplam=0;
    int sayac=0;
    int i;
    
    srand(time(0));
    
    for(i=0;i<30;i++){
    	sayilar[i]=rand()%1000+1001;
    	if( (sayilar[i]%1000)/100==3 || (sayilar[i]%1000)/100==5 ){
    		sayac++;
    		toplam+=sayilar[i];
    		printf("%d\n",sayilar[i]);
		}
	}
    printf("sayilarin toplami: %d ve sayisi: %d",toplam,sayac);
    
    return 0;
}
