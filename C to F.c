#include <stdlib.h>
#include <stdio.h>

int main()
{
    float c, f;

    printf("Entrez la temperature en Celsius: ");
    scanf("%f", &c);
 
    f = (c*1,8)+32;

    printf("%.2f c = %.2f f", c, f);

    return 0;
}
