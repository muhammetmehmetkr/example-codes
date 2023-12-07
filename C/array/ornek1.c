#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int array[]={1,2,3,4,5};		// örnek1
	int i=0;
	
	for(;i<5;i++){
		
		printf("%d\n",array[i]);		// köþelinin içini boþ býrakma..
		
	}	
	char name[20];					//örnek2
	
	printf("enter name: ");
	scanf("%s",&name);
	printf("your name: %s\n",name);
	
	return 0;
}
