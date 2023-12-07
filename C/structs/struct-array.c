#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[20];
	char soyisim[20];
	int numara;
};

int main(){
	struct student students[2];
	int i;
	
	for(i=0;i<2;i++){
		printf("%d. ogrencinin bligilerini giriniz..\n",i+1);
		scanf("%s%s%d",&students[i].name,&students[i].soyisim,&students[i].numara);
	}
	for(i=0;i<2;i++){
		printf("%d. ogrencinin bligileri:\n",i+1);
		printf("%s  %s  %d\n",students[i].name,students[i].soyisim,students[i].numara);
	}
	
	return 0;
}
