#include <stdio.h>
#include <stdlib.h>

// 10 kadar çift sayýlarýn toplamýný gösteren program..

int main() {
	
	int toplam=0;                    // for ile yazdým..
	int i;
	
	for(i=0;i<=10;i++){
		
		if(i%2 ==1){
			continue;
					
		}
		toplam+=i;
	}
	
	printf("%d",toplam);      
	
	
	
/*	int toplam=0;       // while ile yazdým.. while ile yazarken iki defa i++ yapmak lazým.çünkü 1 defa yazýnca görmüyor.
	int i=0;			// o yuzden while biraz sýkýntýlý bu tarz ifadeleri for da kullanýrsan daha garanti olur..
	
	while(i<=10){
		
		if(i%2==1){
			i++;
			continue;
		}
		toplam+=i;
		i++;
		
	}
	printf("%d",toplam);	*/
	
	
	return 0;
}
