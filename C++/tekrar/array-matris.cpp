#include<iostream>

using namespace std;

int main(){
	
	int array[]={1,2,3,4};
	int size=sizeof(array)/sizeof(int);
	
	for(int i=0;i<size;i++){
		cout<<array[i]<<endl;
	}
	string array2[3];
	/*for(int i=0;i<3;i++){
		cin>>array2[i];	
	}
	for(int i=0;i<3;i++){
		cout<<array2[i]<<endl;	
	}*/
	int array3[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<array3[i][j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
