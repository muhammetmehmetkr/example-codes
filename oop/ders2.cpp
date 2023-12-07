#include<iostream>

using namespace std;

class Dikdortgen{
	private:
		int en;
		int boy;
	public:
		int alan();	// tanimlandi.
		int cevre(){
			return 2*(en+boy);
		}
		int getBoy(){			// getler tanimdaki parametreyi donduruyor.
			return boy;
		}
		void setBoy(int b){		// setler void donduruyor.	
			if(boy>=0)
				boy = b;			
			else
				boy = 0;
						
		}
		int getEn(){	// get okumak icin
			return en;
		}
		void setEn(int e){	// set icerigi degistirmek icin
			if(en<0)
				en=0;
			else
				en  = e;			
		}
	
};

int Dikdortgen::alan(){	// method class disinda olusturuldu.
	return en*boy;
}

int main(){
	
	Dikdortgen d1;
	
	d1.setBoy(100);
	d1.setEn(50);
	
	cout<<d1.getBoy()<<endl<<d1.getEn()<<endl<<endl;
	cout<<d1.alan()<<endl<<d1.cevre()<<endl;	
	
	return 0;
}
