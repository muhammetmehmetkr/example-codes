#include <stdio.h>
#include <stdlib.h>		// recrusive mantiginda ebob...

int ebob(int sayi1,int sayi2){
	
	if(sayi2!=0){
		return ebob(sayi2,sayi1%sayi2);
	}
	else{
		return sayi1;
	}
}

int main() {
	
	int sayi1,sayi2;
		
	printf("lutfen pozitif tam sayi giriniz\n");
	scanf("%d%d",&sayi1,&sayi2);
	printf("EBOB=%d\n",ebob(sayi1,sayi2));
	

	return 0;
}
