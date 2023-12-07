#include<stdio.h>
#include<stdlib.h>

struct student{
	char isim[20];
	char soyisim[20];
	int numara;
};
void goster(struct student a){
	printf("%s  %s  %d",a.isim,a.soyisim,a.numara);
}
struct student degeral(){
	struct student yeni;
	printf("ogrenci bilgilerini giriniz\n");
	scanf("%s%s%d",&yeni.isim,&yeni.soyisim,&yeni.numara);
	return yeni;
}
int main(){
	struct student student1=degeral();
	goster(student1);	
	
	return 0;
}
