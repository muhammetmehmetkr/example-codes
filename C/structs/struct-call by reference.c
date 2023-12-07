#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct student{
	char isim[20];
	char soyisim[20];
	int number;
};
struct student *degeral(struct student *p){
	strcpy(p->isim,"ahmet");
	strcpy(p->soyisim,"aktas");
	p->number=36;
	return p;
}
int main(){	
	struct student student1;
	struct student *tut;
	
	tut=degeral(&student1);
	printf("%s  %s  %d",tut->isim,tut->soyisim,tut->number);
	
	return 0;
}
