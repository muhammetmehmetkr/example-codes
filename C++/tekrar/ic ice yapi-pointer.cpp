#include<iostream>

using namespace std;

struct Adress{
	string city;
	int no;
};
struct Employee{
	int id;
	string name;
	Adress* a1;   // pointer adres degiskeni olusturduk.
};

int main(){
	
	Employee e1={34,"mehmet"};
	Employee* ptr=&e1;
	
	cout<<ptr->id<<"\n"<<ptr->name<<endl;
	
	Adress a1={"manisa",45};
	
	e1.a1=&a1;
	
	cout<<ptr->a1->city<<endl;
	cout<<ptr->a1->no<<endl;
	
	
	return 0;
}
