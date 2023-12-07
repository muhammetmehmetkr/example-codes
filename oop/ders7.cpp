#include<iostream>

using namespace std;

class sekil{
	protected:
		int boy;
		int en;
	public:
		sekil(int a,int b){	// constructor
			en = a;
			boy = b;
		}
		void setBoy(int boy){
			this->boy = boy;
		}
		void setEn(int en){
			this->en = en;
		}
		int getBoy(){
			return boy;
		}
		int getEn(){
			return en;
		}
		virtual int alan(){		// hangi tip sekilse o alani cagiriyor.
			cout<<"sekildeki alan: "<<endl;
			return 0;
		}
};

class dikdortgen: public sekil{	// miras
	public:
		dikdortgen(int a, int b):sekil(a,b){}	//constructor		
		int alan(){	// override
			cout<<"dikdortgenin alan: "<<endl;
			return en*boy;
		}
};

class ucgen: public sekil{
	public:
		ucgen(int a, int b):sekil(a,b){}
		int alan(){
			cout<<"ucgenin alan: "<<endl;
			return en*boy/2;
		}
};

int main(){
	
	ucgen u(4,5);
	dikdortgen d(4,5);
	
	cout<<u.alan()<<endl;
	cout<<d.alan()<<endl;
	
	sekil *s;
	s = &u;
	cout<<"seklin alani(ucgen): "<<s->alan()<<endl;
	
	s= &d;
	cout<<"seklin alani(dikdortgen): "<<s->alan()<<endl;
	
	return 0;
}
