#include <stdio.h>
#include <stdlib.h>

int carp(int matris[],int size){				// arraylerde boyut da belirtilmelidir..
	int i=0;
	int carpim=1;
	
	for(;i<size;i++){
		carpim*=matris[i];		
	}
	return carpim;
}


int main(){
	int i,sayilar[5]={};
	
	printf("deger gir\n");
	for(i=0;i<5;i++){
		scanf("%d",&sayilar[i]);
	}
	printf("%d",carp(sayilar,5));
		
	return 0;
}
