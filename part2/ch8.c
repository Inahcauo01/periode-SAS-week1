#include<stdio.h>
#include<stdlib.h>

int main(){
	char c;
	printf("Entrer le caractere : ");	scanf("%c",&c);
	if(c>= 'a' && c<= 'z'){
		printf("Caractere en Minuscule");
	}
	else if(c>= 'A' && c<= 'Z'){
		printf("Caractere en Majuscule");
	}
	else if(c>= '1' && c<= '9'){
		printf("C\'est un nombre");
	}
	
}
