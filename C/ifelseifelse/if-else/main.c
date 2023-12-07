#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int note;
	printf("notunuzu giriniz..\n");
	scanf("%d",& note);
	
	if (note>60) {
	
	printf("dersden gectiniz");
	
	}
	
	else {
		
		printf("dersden kaldiniz");
	}
	
	
	return 0;
}
