#include<iostream>		// constructor

using namespace std;

class insan{
	private:
		int kilo;
		int boy;
	public:
		insan(){	// 3 farkli sekilde constructor yazilmistir.
			boy = 10;
			kilo = 1;
		}
		insan(int b,int k){
			boy = b;
			kilo = k;
		}
		insan(int b){
			boy = b;
		}
		void setBoy(int b){
			boy = b;
		}
		void setKilo(int k){
			kilo = k;
		}
		int getBoy(){
			return boy;
		}
		int getKilo(){
			return kilo;
		}
		
};

int main(){
	
	insan ali;
	insan veli(180,80);
	cout<<"alinin boyu: "<<ali.getBoy()<<endl<<"velinin boyu: "<<veli.getBoy()<<endl;	
	
	
	return 0;
}
