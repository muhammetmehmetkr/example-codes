#include <stdio.h>
#include <stdlib.h>
#include <string.h>		// strcmp -> string compare


int main(){
	
	char kullaniciadi[20];
	char parola[20];
	char gercekkullaniciadi[]="mehmet";
	char gercekparola[]="mehmet1234";
	
	printf("lutfen kullanici adinizi ve parolanizi giriniz\n");
	scanf("%s%s",kullaniciadi,parola);
	
	if(strcmp(kullaniciadi,gercekkullaniciadi)==0 && strcmp(parola,gercekparola)==0){
		printf("hosgeldiniz\n");
	}
	else if(strcmp(kullaniciadi,gercekkullaniciadi)==0 && strcmp(parola,gercekparola)!=0){
		printf("parolanizi yanlis girdiniz\n");		
	}
	else{
		printf("girdiginiz bilgiler yanlistir\n");
	}	
	
	return 0;
}
