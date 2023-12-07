#include<iostream>

using namespace std;

int main(){
	
	int sayi;	// 123456 --> abcdef
	int a,b,c,d,e,f;
	
	cout<<"lutfen 6 basamakli sayi giriniz: ";
	cin>>sayi;
	a = sayi/100000;
	b = (sayi%100000)/10000;
	c = (sayi%10000)/1000;
	d = (sayi%1000)/100;
	e = (sayi%100)/10;
	f = (sayi%10)/1;
	cout<<"sayinin rakamlari toplami: "<<a+b+c+d+e+f;
	
	
	return 0;
}
