#include <stdlib.h>
#include <stdio.h>

int main()
{
    float m, mille;

    printf("Entrez la distance en M : ");
    scanf("%f", &m);
 	
 	
    mille = (m/1000)/1.609;

    printf("%.2f M = %.2f MILLE", m, mille);

    return 0;
}
