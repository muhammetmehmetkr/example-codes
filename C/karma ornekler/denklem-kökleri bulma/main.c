#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
	int a,b,c;
	float x1,x2;
	float delta;
	
	printf("denklemin a sini giriniz..");
	scanf("%d",&a);
	printf("denklemin b sini giriniz..");
	scanf("%d",&b);
	printf("denklemin c sini giriniz..");
	scanf("%d",&c);
	
	delta= b*b-4*a*c;
	x1= (b+(sqrt(delta)))/2*a;
	x2= (-b+(sqrt(delta)))/2*a;
	printf("denklemin kokleri x1=  %.2f,x2= %.2f",x1,x2);           //örnek2
	
		
	/*int a,b,c,d,e;
	float aritmetik;
	printf("5 sayi giriniz...\n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	aritmetik=(a+b+c+d+e)/5.0;
	printf("sayilarin ortalamasi: %.2f",aritmetik);      */    //örnek1
	return 0;
}
