#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b;
	printf("Entrer a et b :");	scanf("%d %d",&a,&b);
	echange(a,b);
}
void echange(int a,int b){
	printf("Avant :  a= %d  b= %d",a,b);
	int t=a;
	a=b;
	b=t;
	printf("\nApres : a= %d  b= %d",a,b);
}
