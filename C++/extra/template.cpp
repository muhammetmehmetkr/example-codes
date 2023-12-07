#include<iostream>

using namespace std;

template<class variable>

variable toplam(variable sayi1,variable sayi2){ // fonksiyon yazar gibi..
	
	return sayi1+sayi2;
}
// iki farkli template olusturulabilir.ama mainde sadece biri cagrilir.digerini yoruma alman lazim...
int main(){
	
	
	cout<<toplam<int>(10,34)<<endl;
	cout<<toplam<double>(10.45,34.54)<<endl;
	cout<<toplam<float>(10.56,34.48)<<endl;
	return 0;
}
