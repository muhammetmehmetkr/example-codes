#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct students{
	int okulno;
	char name[20];
	int sinif;
}student;

int main(){
	
	student student1;
	student student2;
	
	student1.okulno=34;
	strcpy(student1.name,"mehmet");
	student1.sinif=1;
	
	printf("lutfen ogrenci bilgilerini giriniz...\n");
	scanf("%d%s%d",&student2.okulno,student2.name,&student2.sinif);
	
	printf("%d  %s  %d\n",student1.okulno,student1.name,student1.sinif);
	printf("%d  %s  %d\n",student2.okulno,student2.name,student2.sinif);
	
	
	return 0;
}
