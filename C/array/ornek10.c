#include <stdio.h>
#include <stdlib.h>

		// cok boyutlu karakter dizisi..

int main() {
	
	char ogrenci[2][5][20];			// [sýnýf]-[ogrencisayýsý]-[isimuzunluðu]..
	int i,j,k;
	
	printf("ogrencilerin siniflarini ve isimlerini sirayla giriniz...\n");
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			printf("%d. siniftaki %d. numarali ogrenci:\n",i+1,j+1);
			scanf("%s",&ogrenci[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			printf("%d. siniftaki %d. numarali ogrenci: %s\n",i+1,j+1,ogrenci[i][j]);
		}
	}
	
	
	return 0;
}
