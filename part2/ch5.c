#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float a,b,c,delta,x1,x2;
	printf("ax^2+bx+c=0");
	printf("\nEntrer a : ");	scanf("%f",&a);
	printf("Entrer b : ");	scanf("%f",&b);
	printf("Entrer c : ");	scanf("%f",&c);
	delta= (b*b)-(4*a*c);
	if(delta<0)	
		printf("\nl equation n admet aucune solution !");
	else if(delta==0){
		printf("il y a un seul racine x = %.2f",(-b/(2*a)));
	}
	else{
		x1=((-b-(sqrt(delta)))/(2*a));	x1=((-b+(sqrt(delta)))/(2*a));
		printf("l\'equation admet deux solutions :\nx1=%.2f \tx2=%.2f",x1,x2);
		
	}
	
		
}
