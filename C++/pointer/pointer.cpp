#include<iostream>

using namespace std;

void degistir(int *x,int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	cout<<"son hali: "<<*x<<"  "<<*y<<endl;
}

int main(){
	
	int sayi1,sayi2;
	int *sayi1_adres=&sayi1;
	int *sayi2_adres=&sayi2;
	
	cout<<"iki tane sayi giriniz..."<<endl;
	cin>>sayi1>>sayi2;
	
	cout<<"ilk hali: "<<sayi1<<" "<<sayi2<<endl;
	degistir(sayi1_adres,sayi2_adres);
	
	return 0;
}
