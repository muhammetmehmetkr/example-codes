#include<iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	string kelime;
	
	cout<<"lutfen bir kelime giriniz..."<<endl;
	cin>>kelime;
	
	sort(kelime.begin(),kelime.end()); 	// harfleri a dan z ye siralar.
	cout<<kelime;
	
	return 0;
}
