#include<stdio.h>
#include<stdlib.h>	//  int arraylarde & ile dizinin adresini gostermeye gerek yoktur.

int max(int *a,int uzunluk){	// arraylerde boyutu yani eleman sayisi verilmelidir.
	int i;						// pointer i fonksiyonda tamamladik mainde gerek kalmadi.
	int maksimum=a[0];
	for(i=1;i<5;i++){
		if(a[i]>maksimum){
			maksimum=a[i];
		}
	}
	return maksimum;
}

int main(){
	int sayilar[5]={33,10,44,1,2};	
	
	printf("en buyuk sayi %d",max(sayilar,5));	
		
	return 0;
}
