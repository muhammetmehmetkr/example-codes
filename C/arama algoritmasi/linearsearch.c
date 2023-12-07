#include<stdio.h>
#include<stdlib.h>

int linearsearch(int numbers[],int key,int size){
	int i;
	
	for(i=0;i<size;i++){
		if(numbers[i]==key){
			return i;
		}
	}
	return -1;
}

int main(){
	int integers[]={98,97,68,75,148,45,180};
	int istenen;
	int size=sizeof(integers)/sizeof(int);
	
	printf("bulmak istediginiz deger: ");
	scanf("%d",&istenen);
	int searchresult=linearsearch(integers,istenen,size);
	if(searchresult>=0){
		printf("aradiginiz sayi %d indeksde bulunmaktadir\n",searchresult);
	}
	else{
		printf("aradiginiz sayi bulunmamaktadir\n");
	}
		
	return 0;
}
