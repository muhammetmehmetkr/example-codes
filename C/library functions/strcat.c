#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char kullanici[50]= "";		//strcat ile ekleme yapilacagi icin icindeki deger bos.
	char isim[20]= "ad:";
	char meslek[30]= "meslek:";
	char meslekgir[20];
	char isimgir[30];
	printf("lutfen isim ve meslek giriniz\n");
	scanf("%s%s",isimgir,meslekgir);
	
	strcat(isim,isimgir);
	strcat(meslek,meslekgir);
	strcat(kullanici,isim);
	strcat(kullanici," ");		// isim ve meslek arasinda bosluk kalmasi icin..
	strcat(kullanici,meslek);
	
	//printf("%s\n%s",isim,meslek);
	printf("%s",kullanici);
	
	
	return 0;
}
