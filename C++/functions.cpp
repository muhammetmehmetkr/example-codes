#include<iostream>

using namespace std;

int yas_hesapla(int dogum_tarihi){
	
	return 2021-dogum_tarihi;
}

int main(){
	
	int dogum_yili;
	
	cout<<"dogum yilinizi giriniz: "<<endl;
	cin>>dogum_yili;
	cout<<"yasiniz: "<<yas_hesapla(dogum_yili);	
	
	
	return 0;
}
