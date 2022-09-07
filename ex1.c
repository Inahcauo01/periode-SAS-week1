#include<stdio.h>
#include<stdlib.h>

int main(){
	char nom[10],prenom[10],sexe[10],tele[10];
	int age;
	
	printf("ENTREZ VOTRE NOM :");
	scanf(" %s",&nom);
	printf("\nENTREZ VOTRE PRENOM :");
	scanf(" %s",&prenom);
	printf("\nENTREZ VOTRE SEXE :");
	scanf(" %s",&sexe);
	printf("\nENTREZ VOTRE AGE :");
	scanf(" %d",&age);
	printf("\nENTREZ VOTRE TELE :");
	scanf(" %s",&tele);
	printf("-------------------------------\n");
	printf("Votre informations :	%s	 %s	  %d    %s	 %s",nom ,prenom ,age , sexe, tele);
	
}
