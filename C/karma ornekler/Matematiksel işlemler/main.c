#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
   int x1=1;
   int x2=-1;
   
   printf("%d\n",-x1);
   printf("%d\n",-x2);         */
   
   //deðiþkenin önündeki - yada + deðiþkeni - veya + ile çarpar.
    
    /*   
    int x;
    x=10;
    x++;
    x=x+1;
    x+=1;
    printf("%d",x);
                        TOPLAMA ve ÇIKARMA yapmanýn 3 yolu vardýr...
    int y;
    y=9;
    y--;
    y=y-1;
    y-=1;
    printf("%d",y);

    int z;
    z=4;
    z*=4;
    z=z*4;
    printf("%d",z);     ÇARPMA  ve BÖLMEDE iki yol vardýr..

    int t;
    t=256;
    t/=4;
    t=t/4;
    printf("%d",t);

    int m;
    m=48;
    m%=5;              m=m%5          MOD almak da 2 çeþittir..
    printf("%d",m);               */
    
	
	//  x+1=2 (bu tür þeyler C de geçerli deðildir.Sol taraftaki deðer saf bir deðiþken olmalý x veya y gibi...
    
    // Artýrma - Azaltma iþlemleri
    /*
	int x,y,z;
    x=7;                                        ++sayý    --sayý
    y=x++;
    z=++x;
    printf("%d  %d  %d",x,y,z);       */
    
    
                            //postfix: i++;
                            //prefix: ++i;
    int i=4;       
	//printf("%d\n",i++);                    ekrana 4 deðerini bastýrýr.bir sonraki satýrda 5 yazdýrýr. (postfix)
	//printf("%d\n",++i);                    ekrana 5 yazdýrýr. (prefix)  
         return 0; 
    }
