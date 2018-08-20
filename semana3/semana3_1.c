#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    float K;
    float f;

    printf("Temperatura en °c por favor\n");
    scanf("%f", &c);

    K=c+273;
    f=((9*c)/5)+32;

    printf("La temperatura en K es %f:\n",K);
    printf("La temperatura en f es %f:\n",f);


    return 0;
}
