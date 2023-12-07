#include<iostream>		//inheritance
#include <string.h>

using namespace std;

class insan{
	public:		// protected veriye sadece miras classindan ulasilabilir.
		int boy;
		int kilo;
		string adres;
	public:	
		int yemek(){
			kilo++;
		}
		
};

class calisan : public insan{	//  insan classindan miras alindi.public yazilmak zorunda..
	public:
		int maas;
		int zam(int x){
			maas += x;
			kilo = 80;
		}
		void kiloyazdir(){
			cout<<"Kilo: "<<kilo;
		}
};

int main(){	
	calisan c1;
	c1.maas = 5000;
	c1.zam(250);
	//c1.yemek();
	cout<<c1.maas<<endl;
	c1.kiloyazdir();
	c1.boy=(180);
	cout<<c1.boy;
	
	
	return 0;
}
