#include <stdio.h>
#include <stdlib.h>
#include <string.h>		// strlen -> string length

int main(){
	
	/*char isim[]= "mehmet";
	printf("%d",strlen(isim));*/
	int i;
	char isim[50];
	printf("lutfen bir isim giriniz\n");
	gets(isim);	// scanf gorevi yapar,ama scanf den daha kullanisli.scanf de iki kelime yazmak istediginde boslukdan sonrasini almiyor.gets fonksiyonunda boyle bir sikinti yok.	
	
	for(i=strlen(isim)-1;i>=0;i--)		// ismi ters yazdirir..
		printf("%c",isim[i]);
		
		printf("\n");
		
	for(i=0;i<strlen(isim);i++)			// ismi duz yazdirir..
		printf("%c",isim[i]);	
	
	return 0;
}
