#include <stdio.h>
#include <stdlib.h>
#include <string.h>		// strrev -> string reverse		bu ornekde 3 farkli string kutuphanesi kullandim.


int main(){
	
	char kelime[20];
	char kelimenintersi[20];
	
	gets(kelime);		//gets fonksiyonun calismasi icin string kutuphanesine gerek yok..
	
	strcpy(kelimenintersi,kelime);	//kelimenin tersinin icerisine kelimeyi kopyaliyoruz.
	strrev(kelimenintersi);
	printf("%s\n",kelimenintersi);
	//printf("girmis oldugunuz kelimenin tersi: %s",strrev(kelime));  direkt olarak bir kelimenin tersini almak istiyorsak.
	if(strcmp(kelimenintersi,kelime)==0){
		printf("girdiginiz kelime palindromdur\n");
	}
	else{
		printf("girdiginiz kelime palindrom degildir\n");
	}
	
	return 0;
}
