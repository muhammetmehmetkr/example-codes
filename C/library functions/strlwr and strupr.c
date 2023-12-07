#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char kelime[20];
	
	printf("lutfen bir kelime giriniz.\n");
	gets(kelime);

	printf("girdiginiz kelimenin kucuk harflerle yazilmis hali: %s\n",strlwr(kelime));
	printf("girdiginiz kelimenin buyuk harflerle yazilmis hali: %s\n",strupr(kelime));
	
	return 0;
}
