#include <stdio.h>
#include <stdlib.h>


int main() {
	int islem;
	int bakiye=4000;
	int tutar;
	
	printf("1.para cekme\n2.para yatirma\n3.havale yapma\n4.bakiye sorgulama\n5.kart iade\n\n\n\n");	
	printf("Lutfen islem giriniz\n");
	scanf("%d",&islem);
	
	switch(islem){
		
		case 1:
			printf("bakiyeniz: %d\n",bakiye);
			printf("cekilecek tutar:");
			scanf("%d",&tutar);
			if (tutar>4000){
				printf("yetersiz bakiye\n");
		}
			else {
			
			bakiye =bakiye-tutar;
			printf("bakiyeniz: %d\n",bakiye);
		}
			break;	
		case 2:
			printf("bakiyeniz: %d\n",bakiye);
			printf("yatirilacak tutar:");
			scanf("%d",&tutar);
						
			bakiye += tutar;
			printf("bakiyeniz: %d\n",bakiye);
			break;		
		case 3:
			printf("bakiyeniz: %d\n",bakiye);
			printf("havale edilecek tutar:");
			scanf("%d",&tutar);
			if (tutar>4000){
				printf("yetersiz bakiye\n");
		}
			else {
			
			bakiye =bakiye-tutar;
			printf("bakiyeniz: %d\n",bakiye);
		}
			break;
		case 4:
			printf("bakiyeniz: %d\n",bakiye);
			break;
		case 5:
			printf("kartiniz iade edildi");
			break;
			
		
		default:
			printf("hatali giris");
			break;
		}
	
		
	return 0;
}
