#include<iostream>

using namespace std;

struct Ogrenci{
	string isim;
	string bolum;
	int numara;
};

int main(){
	
	Ogrenci ogr1;
	cout<<"lutfen ogrenci bilgilerini giriniz..."<<endl;
	cin>>ogr1.isim>>ogr1.bolum>>ogr1.numara;
	cout<<ogr1.isim<<"\n"<<ogr1.bolum<<"\n"<<ogr1.numara<<endl;
	
	
	return 0;
}
