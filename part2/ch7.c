#include<stdio.h>
#include<stdlib.h>

int main(){
	float n;
	printf("Entrer la note : ");	scanf("%f",&n);
	if(n<10){
		printf("Il est recale :(");
	}
	else if(n>=10 && n<12){
		printf("Passable :/");
	}
	else if(n>=12 && n<14){
		printf("Assez bien :)");
	}
	else if(n>=14 && n<16){
		printf("Bien");
	}else{
		printf("Tres bien");
	}
	
}
