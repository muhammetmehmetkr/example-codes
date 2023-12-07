#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
	char isim[20];
	char soyisim[20];
	int numara;
};

int main(){
	
	struct student student1;
	struct student *tut;
	tut=&student1; 	//pointer adresi tanimla..
	
	strcpy(student1.isim,"mehmet");
	strcpy(student1.soyisim,"kir");
	student1.numara=34;
	
	printf("%s  %s  %d",tut->isim,tut->soyisim,tut->numara); //pointer ismini yaz..
	
	return 0;
}
