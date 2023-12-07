#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	string isimler[3];
	
	cout<<"lutfen kullanici ismi giriniz..."<<endl;
	
	for(int i=0;i<3;i++){
		cin>>isimler[i];
	}
	for(int i=0;i<3;i++){
		cout<<i+1<<". kullanicinin ismi:"<<" "<<isimler[i]<<endl;
	}	
	
	return 0;
}
