#include<stdio.h>
#include<stdlib.h> 	//ic ice yapilar

struct workerinf{
	char rank[20];
	char section[20];
	float salary;
	int workingTime;  //sene
};

struct workers{		//main struct
	char name[20];
	char surname[20];
	int age;
	struct workerinf information;
}; 
void writeworkerinf(struct workers allworkers){
	
	printf("%s  %s  %d  %s  %s  %.2f  %d\n",allworkers.name,allworkers.surname,allworkers.age,
	allworkers.information.rank,allworkers.information.section,allworkers.information.salary,allworkers.information.workingTime);
}
int main(){
	
	struct workers allworkers[1];
	int i;
	for(i=0;i<1;i++){
		printf("%d. elemanin bilgilerini giriniz...\n",i+1);
		scanf("%s%s%d%s%s%f%d",&allworkers[i].name,&allworkers[i].surname,&allworkers[i].age,
		&allworkers[i].information.rank,&allworkers[i].information.section,&allworkers[i].information.salary,&allworkers[i].information.workingTime);
	}
	printf("informations\n");
	for(i=0;i<1;i++){
	writeworkerinf(allworkers[i]);
	}
	
	return 0;
}
