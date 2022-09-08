#include <stdio.h>
#include <stdlib.h>

int main(){
	float f,c;
	printf("Entrer la temperature en F : ");	scanf("%f",&f);
	c = (f-32)/1.8;
	if(c<=14){
		printf("%.1f F = %.1f C \tTres froid",f,c);
	}
	else if(c>14 && c<=25){
		printf("%.1f F = %.1f C \tFroid",f,c);
	}
	else if(c>25 && c<=35){
		printf("%.1f F = %.1f C \tChaud",f,c);
	}
	else{
		printf("%.1f F = %.1f C \tTres chaud",f,c);
	}
	
	
}
