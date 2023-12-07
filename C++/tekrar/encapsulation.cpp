#include<iostream>

using namespace std;

class Student{
	private:
		int age;
		string name;
	public:
		void setAge(int yas){
			age=yas;
		}
		int getAge(){
			return age;
		}
		void setName(string isim){
			name=isim;
		}
		string getName(){
			return name;
		}
};

int main(){
	
	Student s1;
	s1.setAge(34);
	s1.setName("mehmet");
	
	cout<<s1.getAge()<<endl;
	cout<<s1.getName()<<endl;
	
	return 0;
}
