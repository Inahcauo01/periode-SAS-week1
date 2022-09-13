#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i;
	printf("Entrer un nombre : ");	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(premier(i)==1)	printf("%d  ",i);
	}
}

int premier(int n){
	int i=2,c=0;
	while(i<n){
		if(n%i==0)	return 0;
		else		c++;
		i++;
	}
	if(c != 0)		return 1;
}
