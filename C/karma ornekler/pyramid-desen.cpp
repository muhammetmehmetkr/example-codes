#include <stdio.h>  //pyramid

int main(){
  int row,c,n;
  
  printf("enter integer\n");
  scanf("%d",&n);

  for (row=1;row<= n;row++){
    for (c=1;c<=n-row;c++){
    	printf(" ");
	}
    for (c=1;c<=2*row-1;c++){	
      printf("*");
  	}
    printf("\n");
  }

  return 0;
}
