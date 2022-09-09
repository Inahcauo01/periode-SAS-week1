#include<stdio.h>
#include<stdlib.h>

int main(){
	char *s[7]={"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};
	int l = (rand()%6);
	printf("%s\n",s[l]);
}
