#include<stdio.h>
#include<stdlib.h>

int main(){
	int j,m,a;
	printf("##### JJ/MM/AA #####\n"); scanf("%d/%d/%d",&j,&m,&a);
	switch(m){
		case 1:	printf("%d-janvier-%d",j,a);	break;
		case 2:	printf("%d-Fevrier-%d",j,a);	break;
		case 3:	printf("%d-Mars-%d",j,a);		break;
		case 4:	printf("%d-Avril-%d",j,a);		break;
		case 5:	printf("%d-Mai-%d",j,a);		break;
		case 6:	printf("%d-Juin-%d",j,a);		break;
		case 7:	printf("%d-Juillet-%d",j,a);	break;
		case 8:	printf("%d-Aout-%d",j,a);		break;
		case 9:	printf("%d-Septembre-%d",j,a);	break;
		case 10:printf("%d-Octobre-%d",j,a);	break;
		case 11:printf("%d-Nouvembre-%d",j,a);	break;
		case 12:printf("%d-Decembre-%d",j,a);	break;
	}

}
