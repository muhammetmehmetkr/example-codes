#include <stdio.h>
#include <stdlib.h>
		//açik kapý algoritmasý..

int main() {
	
	int acik[10]={0};
	int tur,kapi;
	for(tur=0;tur<=9;tur++){
		for(kapi=tur;kapi<=9;kapi+=tur+1){
			acik[kapi]=!acik[kapi];
		}
	}
	printf("acik kapilarimiz:\n");
	for(kapi=0;kapi<=9;kapi++){
		if(acik[kapi]){					// deðer 0 ise bu statement a girmez zaten..
			printf("%d   ",kapi+1);
	}
}	
	return 0;
}
