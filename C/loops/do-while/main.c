#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int x,y,buyuk,kucuk,kalan;
	int big,small;					// bu deðiþkenleri tanýmlamamýzýn sebebi yazdýrýrken (k,b) yada (b,k) olmasý..
	do{
		printf("ebobunu bulmak istediginiz iki pozitif tam sayi giriniz\n");
		scanf("%d%d",&x,&y);
				
	}while(x<=0 || y<=0);
		if(x>y){
			buyuk=x;
			kucuk=y;
			big=x;
			small=y;
		}
		else{
			buyuk=y;
			kucuk=x;
			big=y;
			small=x;
		}
		kalan=buyuk%kucuk;
		
		while(kalan!=0){
		
			buyuk=kucuk;
			kucuk=kalan;
			kalan=buyuk%kucuk;
		}
		
		printf("ebob(%d,%d)= %d",small,big,kucuk);	
	
	return 0;
}
