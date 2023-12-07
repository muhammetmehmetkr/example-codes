#include <stdio.h>
#include <stdlib.h>

				//fibinocci..

int main() {
	int x=1,y=1;
	int i,z;
	
	printf("%d\n%d\n",x,y);
	
	for(i=0;i<10;i++){
		z=x+y;
		x=y;
		y=z;
		printf("%d\n",z);
	}
	return 0;
}
