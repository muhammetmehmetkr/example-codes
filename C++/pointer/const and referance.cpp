#include<iostream>

using namespace std;

void degistir(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

int main(){
	
	const int notr = 0; // constant sayi oldugu icin degeri degistirilemez..
	
	int sayi1 = 7;
	int sayi2 = 9;
	int &referans = sayi1; // referans sayesinde pointer kullanmadan da sayilari degistirebiliyoruz.
	referans++;
	cout<<sayi1<<endl;
	degistir(sayi1,sayi2);
	cout<<sayi1<<" "<<sayi2<<endl;
	
	return 0;
}
