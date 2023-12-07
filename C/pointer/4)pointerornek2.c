#include<stdio.h>
#include<stdlib.h>

void degistir(int *sayi1,int *sayi2){	
	int temp=*sayi1;
	*sayi1=*sayi2;
	*sayi2=temp;	
}
int main(){
	int sayi1,sayi2;
	
	printf("lutfen iki tam sayi giriniz\n");
	scanf("%d%d",&sayi1,&sayi2);
	printf("sayi1=%d sayi2=%d\n",sayi1,sayi2);
	
	degistir(&sayi1,&sayi2);
	printf("sayi1=%d sayi2=%d\n",sayi1,sayi2);	
	
	return 0;
}
