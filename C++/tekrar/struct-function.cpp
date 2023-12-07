#include<iostream>

using namespace std;

struct employee{
	int id;
	string name;
	string department;
};

void print_emp(employee e1){
	e1.id=45;
	cout<<e1.id<<"\n"<<e1.name<<"\n"<<e1.department<<endl;
}

void change_emp(employee* e1){
	e1->id=19;
	cout<<e1->id<<"\n"<<e1->name<<"\n"<<e1->department<<endl;
}

int main(){
	
	employee e1={34,"mehmet","software"};
	
	print_emp(e1);
	cout<<"eski id: "<<e1.id<<endl;
	cout<<"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"<<endl;
	change_emp(&e1);
	cout<<"eski id: "<<e1.id<<endl;   //yukarida 34 yazmasina ragmen pointer sayesinde 19 degeri ile degistirildi.
	
	return 0;
}
