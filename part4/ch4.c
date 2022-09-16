#include<stdio.h>
#include<stdlib.h>

float divededby(int a,int b);

int main(){
	int a,b;
	printf("Entrer a :");	scanf("%d",&a);
	do{	
	printf("Entrer b :");	scanf("%d",&b);
	}while(b==0);
	printf("La division = %.2f",divededby(a,b));
}
float divededby(int a,int b){
	float d=0;
	return d=(float)a/(float)b;
}
