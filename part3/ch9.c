#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,p,r=1;
	do{	printf("Entrer la base : ");	scanf("%d",&n);
	}while(n<=0);
	do{	printf("Entrer la puissance: ");	scanf("%d",&p);
	}while(p<0);
	while(p!=0){
		r*=n;
		p--;
	}
	printf("%d",r);
}
