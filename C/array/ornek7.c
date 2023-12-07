#include <stdio.h>
#include <stdlib.h>

int main() {
	
	char password[10];
	char passwordverification[10];
	int i;
	int incorrect;
	
	while(1){
		incorrect=0;
		i=0;
		printf("enter password...\n");
		scanf("%s",&password);
		printf("enter again password\n");
		scanf("%s",&passwordverification);
		while(!(password[i]=='\0' && passwordverification[i]=='\0')){
			if(password[i]!=passwordverification[i]){
				printf("you entered incorrectly,please try again...\n");
				incorrect=1;
				break;
			}
			else{
				i++;
			}
		}
		if(incorrect==0){
			printf("passwords matched,registration completed...\n");
			break;
		}		
	}
		
	return 0;
}
