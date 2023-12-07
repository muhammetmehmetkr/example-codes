#include<stdio.h>
#include<stdlib.h>  

void yildizbas(int *adet){
	
	int i;	
	for(i=0;i<*adet;i++){
		printf("* ");
	}
}

int main(){
	
	int sayi;
	printf("kac adet yildiz bastirmak istiyorsunuz\n");
	scanf("%d",&sayi);
	yildizbas(&sayi);	
	
	/*int x,y=0;	//kod sagdan sola calisir.
	int *a1,*a2=&y;	// a1 adresi bos
	a1=a2;			// a1 i de y nin adresine esitledik
	x=++(*a2);			
	*a2=(*a1)+x;
	printf("%d %d %d %d",x,y,*a1,*a2);*/
	
	return 0;
}
