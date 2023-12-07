#include<iostream>		// overloading

using namespace std;

class insan{
	private:
		int boy;	// cm cinsine cevrilmesi gerekir.
		int kilo;
	public:
		void setBoy(int b){ //cm
			boy = b;
		}
		void setBoy(float b){ //m
			boy = b*100;
		}
		int getBoy(){
			return boy;
		}
		void setKilo(int k){
			kilo = k;
		}
		int getKilo(){
			return kilo;
		}
};

int main(){
	insan ali;
	ali.setBoy(184);
	cout<<ali.getBoy()<<endl;
	float b = 1.85;
	ali.setBoy(b);
	cout<<ali.getBoy()<<endl;
	
	
	
	return 0;
}
