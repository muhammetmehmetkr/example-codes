#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi){				// fact fonksiyonu tan�mliyoruz..
	int fact=1;
	
	for(;sayi>0;sayi--){
		fact=fact*sayi;
	}
		return fact;              	// d��a aktar diye komut veriyoruz..
}

int main() {
	
	int n;
	printf("sayi giriniz:");
	scanf("%d",&n);
	printf("toplam: %d",faktoriyel(n));
	
	return 0;
	
}
