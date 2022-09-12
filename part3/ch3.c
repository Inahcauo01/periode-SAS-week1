#include<stdio.h>
#include<stdlib.h>

int main(){	//s'il a exactement deux diviseurs différents; 1 et lui-même.
	int n,i=2,c=0;
	printf("Entrer un nombre : ");	scanf("%d",&n);
	//le cas de 2
	if(i==2)	printf("le nombre est premier");
	while(i<n){
		if(n%i==0){
			printf("Ce n\'est pas un nombre premier");break;
		}else	c++;
		i++;
	}
	if(c != 0)	printf("Le nombre est premier");
}
