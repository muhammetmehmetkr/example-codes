#include<iostream>

using namespace std;

//manav --> sebze,meyve
//kozmetik --> parfum,makyaj
//kasap --> tavuk,dana
struct Kategori{
	string isim;
	int urunadedi;
};
struct Reyonlar{ 
	string isim;
	bool acikmi; //acik yada kapali 1-0
	int urunsayisi;
	Kategori features;
};
void stockazalt(Reyonlar* reyon,int satilanurun){
	reyon->features.urunadedi-=satilanurun;
	reyon->urunsayisi-=satilanurun;
}
int main(){
	
	Reyonlar r1={"kuru gida",1,200,{"makarna",130}};
	
	cout<<r1.isim<<" "<<r1.acikmi<<" "<<r1.urunsayisi<<" "<<r1.features.isim<<" "<<r1.features.urunadedi<<endl;
	stockazalt(&r1,30);
	cout<<r1.isim<<" "<<r1.acikmi<<" "<<r1.urunsayisi<<" "<<r1.features.isim<<" "<<r1.features.urunadedi<<endl;
	return 0;
}
