#include <stdio.h>
#include <stdbool.h>



int main() {
	
	int toplam=0;
	int i;
	int number;
	
	for(i=0;true;i++){
		printf("sayi giriniz: ");
		scanf("%d",&number);
		
		if(number==-1){
			break;
		}
		
		toplam+=number;
		
	}
	
	printf("%d",toplam);
		
	
	return 0;
}
