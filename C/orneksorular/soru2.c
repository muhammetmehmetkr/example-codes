#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int sayi,i;
	int oddcounter=0;
	int evencounter=0;
	
	printf("lutfen 10 adet pozitif tam sayi giriniz...\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&sayi);
		if(sayi%2==0){
			evencounter++;
		}
		else{
			oddcounter++;
		}		
	}
	printf("girmis oldugunuz cift sayi miktari: %d\n",evencounter);
	printf("girmis oldugunuz tek sayi miktari: %d\n",oddcounter);
	
	return 0;
}
