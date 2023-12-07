#include<iostream>

using namespace std;

void print_array(const int *ptr1,const int *ptr2){
	for(;ptr1!=ptr2;ptr1++){
		cout<<*ptr1<<endl;
	}
}

int main(){
	
	const int dizi[]={10,20,30,40,50,60,70,80};
	
	print_array(dizi+1,dizi+5);
		
	
	return 0;
}
