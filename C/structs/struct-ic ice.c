#include<stdio.h>
#include<string.h>

struct Address{
	char mahalle[20];
	char sokak[20];
	
};
struct student{
	char isim[20];
	int numara;
	int yas;
	struct Address adres;
};
int main(){
	struct student student1;
	
	strcpy(student1.isim,"mehmet");
	student1.numara=34;
	student1.yas=23;
	strcpy(student1.adres.mahalle,"hurriyet");
	strcpy(student1.adres.sokak,"agar");	
	
	printf("%s  %d  %d  %s  %s",student1.isim,student1.numara,student1.yas,student1.adres.mahalle,student1.adres.sokak);	
	
	return 0;
}
