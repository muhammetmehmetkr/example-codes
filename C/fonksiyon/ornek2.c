#include <stdio.h>
#include <stdlib.h>

void isimlistele(char isimlistesi[][30],int boyut){ 	// karakter dizisinde karakter uzunluðunu fonksiyonda ve mainde belirt..
	int i;
	for(i=0;i<boyut;i++){
		printf("%s\n",isimlistesi[i]);
	}
}


int main() {
	
	char iscilistesi[5][30]={"ali","ayse","burcu","cem","arda"};
	isimlistele(iscilistesi,5);
	
	return 0;
}
