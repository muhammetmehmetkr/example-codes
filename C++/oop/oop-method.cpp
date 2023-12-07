#include<iostream>

using namespace std;

class Insan{
	public:
	
	string isim;
	int yas;
	
	void isim_yas_soyle(){	// fiil varsa method olur.methodlar class icinde tanimlanabilir...
		cout<<isim<<" "<<yas<<endl;
	}
};

int main(){
	
	Insan i1;
	Insan i2;
	
	i1.isim="mehmet";
	i1.yas=34;
	i2.isim="mert";
	i2.yas=14;
	i1.isim_yas_soyle();
	i2.isim_yas_soyle();
	
	return 0;
}
