#include<iostream>

using namespace std;

struct employee{
	int id;
	string name;
	string department;
};

int main(){
	
	employee e1={34,"mehmet","software"};
	employee* ptr=&e1;
	
	cout<<ptr->departmant<<endl;
	
	
	return 0;
}
