#include<iostream>

using namespace std;

void aralik_bas(const int *x,const int *y){
	for(;x!=y;x++){
		cout<<*x<<endl;
	}
}
int topla(const int a,const int b){
	/*a++;
	b++;*/ // pointer ile yapilmadigi icin hata alinir.sadece pointer ile const sayilarin degeri degistirilebilir...
	
	return a+b;	
}
void id_yazdir(const string *id){
	const string *temp=id;
	for(;id!=(temp+4);id++){
		cout<<*id<<endl;
	}
}
int main(){
	
	/*int sayilar[] = {0,3,6,9,12,15,18};
	aralik_bas(sayilar+1,sayilar+6); // dizinin o indexindeki elemanin adresini verir.
	cout<<"toplam: "<<topla(10,20);*/
	string id[]={"M.","MEHMET","KIR","34"};
	id_yazdir(id);
	
	return 0;
}
