#include <stdio.h>
int main()
{
    int bajo, alto, i, flag;
    printf("Introduce dos numeros para un intervalo\n");
    scanf("%d %d", &bajo, &alto);
    if (alto-bajo>541){
    printf("Hay mas de 100 numeros primos en ese intervalo, Introduce dos numeros para un\nintervalo menor a 100\n");
    scanf("%d %d", &bajo, &alto);}
    printf("Los numeros primos entre %d y %d son:\n", bajo, alto);
    while (bajo < alto)
    {
        flag = 0;
        for(i = 2; i <= bajo/2; ++i)
        {
            if(bajo % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d ", bajo);
        ++bajo;
    }
    return 0;
}

