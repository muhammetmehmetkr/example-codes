#include <stdio.h>			// fonksiyonu kendi icerinde cagirmak..
#include <stdlib.h>			// kendi icerisinde yenilenen fonksiyon = recursive function

int toplam(int sayi){
	
	if(sayi!=0){									// n*(n+1)/2 formuluyle ayni anlama gelir..
		return sayi+toplam(sayi-1);
	}
	else{
		return sayi;
	}
}

int main() {
	
	int sayi;
	printf("lutfen sayi giriniz:\n");
	scanf("%d",&sayi);
	printf("%d",toplam(sayi));	
	
	return 0;
}
