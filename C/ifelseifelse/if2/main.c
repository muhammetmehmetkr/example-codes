#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int e1,e2,e3;
	float dersort,gno;
	
	printf("1. ders notunu giriniz..");
	scanf("%d",&e1);
	printf("2. ders notunu giriniz..");
	scanf("%d",&e2);
	printf("3. ders notunu giriniz..");
	scanf("%d",&e3);
	dersort=(e1+e2+e3)/3.0;
	printf("gno giriniz..\n");
	scanf("%.2f",&gno);
	
	if (dersort>60){
		printf("dersden gectiniz..");
	}
	else if (dersort>50){
		printf("bute kaldiniz..");
		if (gno<2.5)
		printf("dersi seneye almalisin cunku ortalama dusuk..");
	}
	
	else {
	
	printf("dersden kaldiniz..");
	}
	
	
	
	
	
	
	
	return 0;
}
