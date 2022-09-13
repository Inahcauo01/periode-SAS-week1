#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,t[100],i,r;
	printf("Entrer le n : ");	scanf("%d",&n);
	t[0]=1,t[1]=1;
	for(i=2;i<=n;i++){
		t[i]=t[i-1]+t[i-2];
		r=t[i];
	}printf("U%d = %d\n",n,r);
	//printf("U%d = %d",n,fib(n));
}

/*
int fib(int n){
	if(n==0 ||n==1)
		return 1;
	else
		return fib(n-1)+fib(n-2);
}*/
