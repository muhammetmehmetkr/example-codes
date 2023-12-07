#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int dizi[] = {1,-45,12,35,456,34,879};
	int boyut = sizeof(dizi)/sizeof(int);
	sort(dizi,dizi+boyut);
	
	for(int i=0;i<boyut;i++){
		cout<<dizi[i]<<"  ";
	}
	
	return 0;
}
