#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char str[10];
	char inv[10];
	printf("Entrer le mot : ");	scanf("%s",&str);
	int i, l=strlen(str);
	for (i=0; i<l; i++)
		inv[i]=str[l-1-i];
	if(strcmp(str,inv) ==0){
		printf("===> Palindrome");
	}
	else{
		printf("===> Ce n\'est pas un palindrome");
	}
	
		
}
