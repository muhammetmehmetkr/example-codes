#include<iostream>	// object pointer

using namespace std;

class insan{
	public:
		int boy;
		int kilo;
	void yemek(int kilo){
		this->kilo = this->kilo + kilo;
	}
};

int main(){
	
	insan ali;
	ali.boy = 180;
	
	insan *g;
	g = &ali;
	
	cout<<ali.boy<<endl;
	cout<<g->boy<<endl;
	
	ali.boy = 185;
	
	cout<<g->boy<<endl;
	
	g->kilo = 70;
	g->yemek(5);
	
	cout<<g->kilo<<endl;
	
	
	
	return 0;
}
