#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,s;
	printf("Entrer a : ");	scanf("%d",&a);
	printf("Entrer b : ");	scanf("%d",&b);
	s=a+b;
	printf("La somme : %d",s);
	if(a==b){
		printf("\nLe triple de la somme : %d",(3*s));
	}
		
}
