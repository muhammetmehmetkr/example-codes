#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int sayi){
	
	if(sayi>=1){
		return sayi*faktoriyel(sayi-1);
	}
	else{
		return 1;
	}
}

int main() {
	
	int sayi;
		
		printf("lutfen sayi giriniz\n");
		scanf("%d",&sayi);
				
	while(sayi<0){
		printf("lutfen sayi giriniz\n");
		scanf("%d",&sayi);		
	}
	printf("%d!=%d\n",sayi,faktoriyel(sayi));	
	
	return 0;
}
