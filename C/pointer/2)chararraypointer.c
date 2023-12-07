#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i;
	//char *takimlar[]={"balikesirspor","galatasaray","besiktas"};
	//printf("%s\n",*(takimlar));
	//printf("%s\n",*(takimlar+1));
	/*for(i=0;i<2;i++){
		printf("%s\n",*(takimlar+i));
	}*/
	/*for(i=0;takimlar[i]!='\0';i++){
		printf("%s\n",*(takimlar+i));
	}*/	
	char ulkeler[5][20];
	
	for(i=0;i<5;i++){
		printf("%d. ulkeyi giriniz\n",i+1);
		gets(ulkeler[i]);		//scanf de kullanilabilir..
	}
	printf("\n");
	/*for(i=0;i<5;i++){
		printf("%s\n",ulkeler[i]);
	}*/
	
	char *ulkelerinadresleri[5];
	for(i=0;i<5;i++){
		ulkelerinadresleri[i] = &ulkeler[i];
	}
	for(i=0;i<5;i++){
		printf("%s  ",*(ulkelerinadresleri+i));
	}
	
	return 0;
}
