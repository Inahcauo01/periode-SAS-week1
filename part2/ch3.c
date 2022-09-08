#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,tmp;
	printf("Entrer a : ");	scanf("%d",&a);
	printf("Entrer b : ");	scanf("%d",&b);
	if(a<b){
		tmp=a;
		a=b;
		b=tmp;
		printf("a = %d \nb = %d",a,b);
	}else
		printf("\nLes nombres sont identiques !");
	
		
}
