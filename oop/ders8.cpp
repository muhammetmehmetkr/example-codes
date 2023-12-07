#include <iostream>
using namespace std;
 
class calisan{	// abstract class
	protected:
		int maas ;
		int tcno ;
		int alacak ;
		int borc;
	public:
		virtual int maasodemesi()=0; // abstract method
		virtual int avanscekme()=0;
};
class muhendis:public calisan{ // abstract
};
class bilgisayarmuhendisi:public muhendis{ 	// abstract method degildir.
	int avanscekme(){
		return 5000;
	}
	int maasodemesi(){
		return maas;
	}
};
class sekreter:public calisan{
	int maasodemesi(){
		return maas ;
	}
	int avanscekme(){
		int miktar=10000;
		if (miktar < maas/2 ){
			return miktar ;
		}
		else
			return 0 ;
	}
}; 
 
int main(){
	
	bilgisayarmuhendisi ali;
	
	return 0;
}
