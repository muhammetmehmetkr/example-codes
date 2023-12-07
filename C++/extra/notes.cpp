#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
	
	/*int a,b,d;
	a=5;
	b=6;
	d=(a<b) ? a:b; // a, b'den kucuk ise d=a degil ise d=b anlamindadir.
	cout<<d<<endl;
	*/
	int a;
	srand(time(0));
	a=rand()%100;
	cout<<a;
	
	return 0;
}
