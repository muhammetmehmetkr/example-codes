#include <stdio.h>
#include <stdlib.h>

int asalmi(int sayi){
	int i;
	
	if(sayi==1){
		return 0;
	}
	for(i=2;i<sayi;i++){
		if(sayi%i==0){
			return 0;			// 0 d�nerse asal de�ildir..
		}
	}
	return 1;					// 1 d�nerse asald�r..
}

int main() {
	int n;
	printf("sayi giriniz..\n");
	scanf("%d",&n);
	if(asalmi(n)==0){
		printf("bu sayi asal degildir..");
	}
	else {
		printf("bu sayi asaldir..");
	}
	return 0;
}
