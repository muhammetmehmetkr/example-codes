#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
   int x1=1;
   int x2=-1;
   
   printf("%d\n",-x1);
   printf("%d\n",-x2);         */
   
   //de�i�kenin �n�ndeki - yada + de�i�keni - veya + ile �arpar.
    
    /*   
    int x;
    x=10;
    x++;
    x=x+1;
    x+=1;
    printf("%d",x);
                        TOPLAMA ve �IKARMA yapman�n 3 yolu vard�r...
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
    printf("%d",z);     �ARPMA  ve B�LMEDE iki yol vard�r..

    int t;
    t=256;
    t/=4;
    t=t/4;
    printf("%d",t);

    int m;
    m=48;
    m%=5;              m=m%5          MOD almak da 2 �e�ittir..
    printf("%d",m);               */
    
	
	//  x+1=2 (bu t�r �eyler C de ge�erli de�ildir.Sol taraftaki de�er saf bir de�i�ken olmal� x veya y gibi...
    
    // Art�rma - Azaltma i�lemleri
    /*
	int x,y,z;
    x=7;                                        ++say�    --say�
    y=x++;
    z=++x;
    printf("%d  %d  %d",x,y,z);       */
    
    
                            //postfix: i++;
                            //prefix: ++i;
    int i=4;       
	//printf("%d\n",i++);                    ekrana 4 de�erini bast�r�r.bir sonraki sat�rda 5 yazd�r�r. (postfix)
	//printf("%d\n",++i);                    ekrana 5 yazd�r�r. (prefix)  
         return 0; 
    }
