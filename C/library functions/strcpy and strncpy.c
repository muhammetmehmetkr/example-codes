#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char ilcebilgileri[20]="45500 manisa";
	char postakodu[6];
	
	//strcpy(postakodu,ilcebilgileri); //ilce bilgilerini; posta kodunun icine atadi..
	strncpy(postakodu,ilcebilgileri,5);
	printf("posta kodu : %s",postakodu);
	
	return 0;
}

