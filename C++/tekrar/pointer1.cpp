#include<iostream>

using namespace std;

void degerdegistir(int *ptr){
	*ptr=20;
	cout<<"degiskenin yeni degeri: \n"<<*ptr;
	
}

int main(){
	
	int a=7;
	int *ptr=&a;
	
	cout<<&a<<endl;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	
	*ptr=9;
	cout<<a<<endl;
	
	degerdegistir(&a);
	
	
	return 0;
}
