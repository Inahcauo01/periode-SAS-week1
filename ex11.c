#include<stdlib.h>
#include<stdio.h>

int main(){
	float lon,lar;
	printf("Enter la longeur : ");	scanf("%f",&lon);
	printf("Enter la largeur : ");	scanf("%f",&lar);
	printf("La Circonference : %.2f", (2*(lon+lar)));
	
}
