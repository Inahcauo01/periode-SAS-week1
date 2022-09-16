#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isprime(int n);

int main(){
	int n,i;
	printf("Entrer un nombre : ");	scanf("%d",&n);
		if(isprime(n))	printf("premier");
		else printf("n est pas premier");
}

bool isprime(int n){
	int i=2,c=0;
	while(i<n){
		if(n%i==0)	return false;
		else		c++;
		i++;
	}
	if(c != 0)		return true;
}
