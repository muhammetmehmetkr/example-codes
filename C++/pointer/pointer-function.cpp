#include<iostream>

using namespace std;

void bastir(int *diziadres,int boyut){
	
	for(int i=0;i<boyut;i++){
		cout<<diziadres[i]<<endl;
	}
}
int toplam(int *diziadres,int boyut){
	int toplam=0;
	for(int i=0;i<boyut;i++){
		toplam+=diziadres[i];
	}
	return toplam;
}
int maks(int *diziadres,int boyut){
	int maximum=0;
	for(int i=0;i<boyut;i++){
		if(diziadres[i]>maximum){
			maximum=diziadres[i];
		}
	}
	return maximum;
}

int main(){
	
	int sayilar[]={10,2,3,4,5,1};
	int boyut=sizeof(sayilar)/sizeof(int);
	bastir(sayilar,boyut);		// &sayilar[0] da yazilabilir. iki turlu de calisiyor...	
	cout<<"dizideki sayilarin toplami: "<<toplam(sayilar,boyut)<<endl;
	cout<<"en buyuk sayi: "<<maks(sayilar,boyut);
	
	return 0;
}
