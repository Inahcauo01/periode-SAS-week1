#include<stdio.h>
#include<stdlib.h>

int main(){
	int tab[20],n,i,j,tmp,r;
	printf("Entrer la taille du tableau :");	scanf("%d",&n);
	
	remplir(tab ,n);
	
	printf("Avant le tri :\t");
	afficher(tab ,n);
	 
	trier(tab,n);
	
	printf("\nApres le tri :\t");
	afficher(tab ,n);	 
	
	printf("\nEntrez l element a rechercher: ");
	scanf("%d", &r);
	if(rechercher(tab,r))
	printf("\nL indice de %d est %d",r,rechercher(tab,n,r));
}

int rechercher(int tab[],int n,int r){
	int i;
	for (i=0;i<n;i++){
		if(tab[i] == r)
			return i;
	}
}

void remplir(int tab[] ,int n){
	int i;
	for(i=0;i<n;i++){
 		printf("tab[%d] = ",i);	scanf("%d",&tab[i]);
	 }
}
void afficher(int tab[],int n){
	int i;
	for(i=0;i<n;i++){
 		printf("%d ",tab[i]);
	 }
}
void trier(int tab[],int n){
	int i,j,tmp;
	for(i=0;i<n-1;i++){
 		for(j=0;j<n-1-i;j++){
	 		if(tab[j]>tab[j+1]){
	 			tmp=tab[j];
	 			tab[j]=tab[j+1];
	 			tab[j+1]=tmp;
			}
		}
	}
}
