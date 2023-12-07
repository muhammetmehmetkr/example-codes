#include<iostream>

using namespace std;

int main(){
	
	int array[]={1,2,3,4};
	int *ptr=array;     // [] index belirtilmezse dizinin baslangic adresini alir.
	
	cout<<ptr<<endl;	// arrayin baslangic adresi
	cout<<&array[2]<<endl;  // 3.elemanin baslangic adresine gitti.
	cout<<array+2<<endl;   // ustteki ornekle ayni anlamda
	
	cout<<*ptr<<endl;
	cout<<*ptr+1<<endl;
	cout<<*ptr+3<<endl;
	
	string dizi[]={"mehmet","ali","veli"};
	
	string *ptr2=dizi;
	cout<<ptr2[1]<<endl;  // arraydeki index mantigiyla ayni..array[2] derse dizinin 3. elemani yazdirilir.
	cout<<*(ptr2+1)<<endl; // bir onceki ornekle ayni,ama usstteki daha cok kullanilr.
	
	return 0;
}
