#include<stdlib.h>
#include<stdio.h>

int main(){
	float f,c;
	printf("Enter la temperature en Farenheit : ");	scanf("%f",&f);
	c = (f-32)/1.8;
	if(c<15)	
		printf("la temerature %.2f \nTres froid",c);
	else if(c>=15 && c<23)	
		printf("la temerature %.2f \nFroid",c);
	else if(c>=23 && c<33)	
		printf("la temerature %.2f \nNormal",c);
	else if(c>=33 && c<38)	
		printf("la temerature %.2f \nChaud",c);
	else	
		printf("la temerature %.2f \nTres chaud",c);
	
}
