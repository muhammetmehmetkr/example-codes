#include <stdio.h>
#include <stdlib.h>

// rakamlar� toplam� ve hane say�s�n� veren program

int main() {
	
	int sayi,hane=0,toplam=0;
		
		printf("sayi giriniz:\n");
		scanf("%d",&sayi);
	
	do {
		
		toplam +=(sayi%10);
		hane++;
		sayi=sayi/10;
				
	}
	
	while (sayi>0); {
	printf("rakamlari toplami %d   %d haneli\n",toplam,hane);
	
		
	}
	
	return 0;
}
