#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int vize1,vize2,final;
	float dersort,gno;
	
	printf("1.vize:");
	scanf("%d",&vize1);
	printf("2.vize:");
	scanf("%d",&vize2);
	printf("final:");
	scanf("%d",&final);
	printf("GNO:");
	scanf("%.2f",&gno);
	dersort=vize1*3/10.0+vize2*3/10.0+final*4/10.0;
	
	if (dersort>=90 && dersort<=100){
		printf("harf notun AA ve ders ortalamaniz: %.2f",dersort);
	}
		else if (dersort>=85 && dersort<90){
		printf("harf notunuz BA ve ders ortalamaniz: %.2f",dersort);
		
	}
		else if (dersort>=80 && dersort<85){
		printf("harf notunuz BB ve ders ortalamaniz: %.2f",dersort);
		
	}
		else if (dersort>=75 && dersort<80){
		printf("harf notunuz BC ve ders ortalamaniz: %.2f",dersort);
		
	}
		else if (dersort>=70 && dersort<75){
		printf("harf notunuz CB ve ders ortalamaniz: %.2f\n",dersort);
		if(gno<2.5){
			printf("dersi tekrar almalisin ortalaman dusuk");
		}
	}
		else if (dersort>=65 && dersort<70){
		printf("harf notunuz CC ve ders ortalamaniz: %.2f\n",dersort);
		if(gno<2.5){
			printf("dersi tekrar almalisin ortalaman dusuk");
		}
	}
		else if (dersort>=60 && dersort<65){
		printf("harf notunuz DD ve ders ortalamaniz: %.2f\n",dersort);
		if(gno<2.5){
			printf("dersi tekrar almalisin ortalaman dusuk");				
		}
	}
	else {
	
		printf("harf notunuz FF ve ders ortalamaniz: %.2f\n",dersort);
		printf("dersden kaldiniz..");
	}
		
	return 0;
}
