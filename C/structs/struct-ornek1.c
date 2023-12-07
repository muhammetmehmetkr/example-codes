#include<stdio.h>
#include<stdlib.h>

struct kitap{
	char kitapadi[20];
	char yazar[20];
	int basimyili;
	float fiyat;
}romankitaplari[2]={{"donusum","kafka",1950,23.5},{"suc ve ceza","dosto",1920,11.5}};

int main(){
	
	float toplamfiyat;
	int i;
	for(i=0;i<2;i++){
		toplamfiyat+=romankitaplari[i].fiyat;
	}
	printf("toplam fiyat: %.2f",toplamfiyat);	
	
	return 0;
}
