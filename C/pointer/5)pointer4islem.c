#include<stdio.h>
#include<stdlib.h>

float topla(float *x,float *y){	
	return *x+*y;
}
float cikar(float *a,float *b){
	return *a-*b;
}
float carp(float *c,float *d){
	return *c**d;
}
float bol(float *sayi1,float *sayi2){
	return *sayi1/(*sayi2);
}
int main(){	
	float sayi1,sayi2;
	printf("lutfen iki deger giriniz\n");
	scanf("%f%f",&sayi1,&sayi2);
	
	printf("%.2f %.2f %.2f %.2f",topla(&sayi1,&sayi2),cikar(&sayi1,&sayi2),carp(&sayi1,&sayi2),bol(&sayi1,&sayi2));
	
	return 0;
}
