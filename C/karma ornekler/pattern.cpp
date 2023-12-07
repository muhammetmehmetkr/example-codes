#include<stdio.h>
#include<stdlib.h>

int main(){
	int number;
	scanf("%d",&number);
	puts("");
	for(int satir=1;satir<=number;satir++){
		for(int space=1;space<=number-satir;space++){
			printf(" ");
		}
		for(int sutun=1;sutun<=satir;sutun++){
			printf("*");			
		}
			printf("  ");
		for(int sutun=1;sutun<=satir;sutun++){
			printf("*");			
		}
		printf("\n");
	}
	
	return 0;
}
