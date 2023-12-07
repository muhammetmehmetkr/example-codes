#include<iostream>

using namespace std;

void yazdir(string array[]){
	for(int i=0;i<3;i++){
		cout<<*(array+i)<<endl;
	}
}

int main(){
	
	string kelimeler[3]={"mehmet","ali","veli"};
	string *adres=&kelimeler[0];
	
	yazdir(adres);
	
	return 0;
}
