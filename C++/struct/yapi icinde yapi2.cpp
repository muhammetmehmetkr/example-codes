#include<iostream>

using namespace std;

struct Kategori{
	string isim;
	int urunadedi;
};
struct Reyonlar{ 
	string isim;
	bool acikmi; //acik yada kapali 1-0
	int urunsayisi;
	Kategori* features;
};

int main(){
	
	Reyonlar r1;
	Reyonlar r2;
	
	r2.isim="kasap";
	r2.acikmi=true;
	r2.urunsayisi=300;
	
	Kategori a={"tavuk",150};
	r2.features=&a;
	r1=r2;
	cout<<r1.isim<<endl;
	cout<<r2.features->isim<<" "<<r2.features->urunadedi<<endl;  // -> ifadesini pointerlarda kullaniriz yani features'a gir isimi al gibi...
	
	
	return 0;
}
