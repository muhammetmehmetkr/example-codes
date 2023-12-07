#include <iostream>
#include <string.h>

using namespace std;

class Ogrenci{
	private:
		string isim;
	private:
		int numara;	
	public:
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
	
	Ogrenci ogr1;
	ogr1.setisim("mehmet");
	ogr1.setnumara(34);
	
	cout<<ogr1.getisim()<<" "<<ogr1.getnumara()<<endl;
	
	
	return 0;
}
