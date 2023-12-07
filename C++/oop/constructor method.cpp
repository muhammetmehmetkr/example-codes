#include <iostream>
#include <string.h>

using namespace std;

class Ogrenci{
	private:
		string isim;
	private:
		int numara;	
	public:
		
		Ogrenci(string name,int number){  // constructor yapi..
			isim=name;
			numara=number;
		}
		~Ogrenci(){
			cout<<"obje basarili bir sekilde yok edildi"<<endl;
		}
		
		void setisim(string name){
			
			if(name.size()>= 3){
				isim=name;
			}
			else{
				cout<<"lutfen en az 3 harfli isim giriniz..."<<endl;
			}
		}
		
		void setnumara(int number){
			if(number>0){
				numara=number;
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

int main(){ 
	
	Ogrenci *ogr1=new Ogrenci("arda",35);  //objede degisiklik yapmak icin set methodlari kullanilir..
	
	ogr1->ozellikleri_goster();
	delete ogr1;
	//ogr1->ozellikleri_goster(); bilgiler silindigi icin ramde bulamiyor ve program calisma hatasi veriyor.
	
	return 0;
}
