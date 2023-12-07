#include<iostream>

using namespace std;

class Dikdortgen{
	public:
		int en;
		int boy;
	
		int cevre(){	// method
			return 2*(en+boy);
		}
		int alan(){		//method
			return en*boy;
		}
};

int main(){	
	
	Dikdortgen d1;
	Dikdortgen d2;
	d1.boy= 100;
	d1.en = 50;
	d1.cevre();
	d1.alan();
	cout<<d1.cevre()<<endl<<d1.alan()<<endl;
	
	d2.boy= 200;
	d2.en = 150;
	d2.cevre();
	d2.alan();
	cout<<d2.cevre()<<endl<<d2.alan()<<endl;	
	
	return 0;
}
