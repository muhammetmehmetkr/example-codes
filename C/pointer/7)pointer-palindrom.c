#include<stdio.h>
#include<stdlib.h>


int main(){
	
	char kelime[100];
	char *duzadres,*tersadres;
	
	printf("palindrom olup olmadigini ogrenmek istediginiz kelimeyi giriniz\n");
	gets(kelime);
	
	for(tersadres=kelime;*tersadres!='\0';tersadres++);
		for(duzadres=kelime,tersadres--;tersadres>=duzadres;){
			if(*tersadres==*duzadres){
				tersadres--;
				duzadres++;
			}
			else{
				break;
			}
		}
		if(duzadres>tersadres){			
			printf("Palindromdur...\n");
		}
		else{
			printf("Palindrom degildir...\n");
		}
			
	return 0;
}
