#include<iostream>

using namespace std;

struct Ogrenci{
	string isim;
	int numara;
	
};
void isimdegistir(Ogrenci *eski_id,string yeni_id){
	eski_id->isim=yeni_id;
}
void ogrenciolustur(Ogrenci *yeniogrenci,string isim,int numara){
	yeniogrenci->isim=isim;
	yeniogrenci->numara=numara;
}
void ogrenciyazdir(Ogrenci ogr){
	cout<<"ogrenci bilgileri: "<<ogr.isim<<" "<<ogr.numara<<endl;
	
}
void ogrencisil(Ogrenci *ogr){
	ogr->isim="";
	ogr->numara={};
}
int main(){
	
	/*Ogrenci ogr1;
	ogr1.isim="mehmet";
	cout<<ogr1.isim<<endl;
	isimdegistir(&ogr1,"fatih");
	cout<<ogr1.isim<<endl;*/   //isimdegistir fonk. ornegi...
	Ogrenci ogr2;
	ogrenciolustur(&ogr2,"ali veli",34);
	ogrenciyazdir(ogr2);
	ogrencisil(&ogr2);
	ogrenciyazdir(ogr2);
	return 0;
}
