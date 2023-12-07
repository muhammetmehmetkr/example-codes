#include<stdio.h>
#include<stdlib.h> 	


int main(){		// iki basamakli sayilarin rakamlari toplami...
	
	int i;
	int toplam=0;
	
	for(i=10;i<=99;i++){
		toplam+=i%10;	// birler basamagi
		toplam+=i/10;	// onlar basamagi		
	}
	printf("toplam= %d",toplam);
	
	return 0;
}
