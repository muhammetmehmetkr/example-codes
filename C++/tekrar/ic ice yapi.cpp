#include<iostream>

using namespace std;

struct Adress{
	string city;
	int no;
};
struct Employee{
	int id;
	string name;
	Adress a1;
};

int main(){
	
	Employee e1={34,"mehmet",{"manisa",12}};  //ic ice suslu parantez var.
	
	cout<<e1.id<<endl;
	cout<<e1.name<<endl;
	cout<<e1.a1.city<<endl;
	cout<<e1.a1.no<<endl;
	
	
	
	return 0;
}
