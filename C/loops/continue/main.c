#include <stdio.h>
#include <stdlib.h>

// 10 kadar �ift say�lar�n toplam�n� g�steren program..

int main() {
	
	int toplam=0;                    // for ile yazd�m..
	int i;
	
	for(i=0;i<=10;i++){
		
		if(i%2 ==1){
			continue;
					
		}
		toplam+=i;
	}
	
	printf("%d",toplam);      
	
	
	
/*	int toplam=0;       // while ile yazd�m.. while ile yazarken iki defa i++ yapmak laz�m.��nk� 1 defa yaz�nca g�rm�yor.
	int i=0;			// o yuzden while biraz s�k�nt�l� bu tarz ifadeleri for da kullan�rsan daha garanti olur..
	
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
