#include<stdio.h>
#include<stdlib.h> // catar uzunlugu bulurken strlen kullanilir ama #include<string.h> kutuphanesi gerekir.->strlen(dizi)
//#include<string.h>
int findlength(char *dizininadresi){
	int i,dizininuzunlugu=0;
	for(i=0;dizininadresi[i]!='\0';i++){  // *dizininadresi demedik cunku dizinin icindeki degerleri [i] ile aliyoruz.char degiskenlerinde [] i unutma!
		dizininuzunlugu++;
	}
	return dizininuzunlugu;
}

int main(){
	
	char dizi[100];
	printf("uzunlugunu bulmak istediginiz kelimeyi giriniz...\n");
	gets(dizi);		// catar yazdirirken scanf yerine gets kullanmak daha mantikli,scanf boslukdan sonrasini almiyor.
	printf("%d\n",findlength(&dizi));
	//printf("strlen: %d",strlen(dizi));
	return 0;
}
