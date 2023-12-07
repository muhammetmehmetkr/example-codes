#include <iostream>
#include <string.h>

using namespace std;

class Ogrenci{
	private:
		string isim;
	private:
		int numara;	
	public:
		
		Ogrenci(string isim,int numara){  // constructor yapi..
			this->isim=isim;			// ayni parametreyi kullanmak icin 'this->' anahtar sozcugu kullanilir..
			this->numara=numara;	// isim adresine git ve isme esitle, numara adresine git ve numaraya esitle anlaminda...
		}
		
		void setisim(string isim){
			
			if(isim.size()>= 3){
				this->isim=isim;
			}
			else{
				cout<<"lutfen en az 3 harfli isim giriniz..."<<endl;
			}
		}
		
		void setnumara(int numara){
			if(numara>0){
				this->numara=numara;
			}
			else{
				cout<<"0'dan buyuk sayi giriniz..."<<endl;
			}
		}
		
		void ozellikleri_goster(){
			
			cout<<isim<<" "<<numara<<endl;
		}
		
		string getisim(){
			
			return isim;
		}
		
		int getnumara(){
			
			return numara;
		}
		
};

int main(){ // this anahtar key sayesinde get methodlarina gerek kalmiyor..
	
	Ogrenci ogr1("ali",40);
	
	ogr1.ozellikleri_goster();
	
	return 0;
}
