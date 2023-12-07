#include <stdio.h>
#include <stdlib.h>

int enbuyuksayi(int sayilar[],int boyut){	// boyutu ayrý olarak tanýmladým..boyut=kaç tane sayý var
	int enbuyukdeger=0;
	int i;
	for(i=0;i<boyut;i++){
		if(sayilar[i]>enbuyukdeger){
			enbuyukdeger=sayilar[i];			
		}		
	}
	return enbuyukdeger;
}

int main() {
	
	int sayilar[]={2,3,4,5,6,7,9,103};
	int boyut=sizeof (sayilar)/sizeof (sayilar[0]);
		
	printf("dizimizin boyutu %d\n",boyut);
	printf("en buyuk deger: %d\n",enbuyuksayi(sayilar,boyut));
	
	return 0;
}
