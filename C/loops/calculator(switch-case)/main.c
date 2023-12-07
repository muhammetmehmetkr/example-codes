#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int secim;
	float x,y;	
	
	printf("lutfen islem seciniz..\n\n");
	printf("1)toplama\n2)cikarma\n3)carpma\n4)bolme\n5)karekok\n6)kuvvet\n");
	scanf("%d",&secim);
	
	if(secim>0 && secim<7){
		printf("lutfen iki sayi giriniz..\n");
		scanf("%f%f",&x,&y);	
	}	
	switch(secim) {
		case 1:
			printf("toplam= %.2f",x+y);
			break;
		case 2:
			printf("toplam= %.2f",x-y);
			break;
		case 3:
			printf("toplam= %.2f",x*y);
			break;
		case 4:
			printf("toplam= %.2f",x/y);
			break;
		case 5:
			printf("karekok: %.2f,karekok: %.2f",sqrt(x),sqrt(y));
			break;
		case 6:
			printf("%.2f uzeri %.2f: %.2f",x,y,pow(x,y));
			break;
		default:
			printf("1-6 arasi deger girin..");
			break;		
		
	}		
	
	return 0;
}
