#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{


FILE* fp=NULL;
char* nombrearchivo="texto2.txt";

int numeros[5];
int *p_numeros;
    p_numeros = malloc(5*sizeof(int));
int i;
float sum, prom, suma0, suma1, suma2, suma3, suma4, cociente, S;

fp = fopen(nombrearchivo, "r+");
if(fp==NULL)return -1;

for (i=0;i<5;i++){
    fscanf(fp,"%d",&numeros[i]);
    p_numeros=&numeros[i];
    //printf("%d\n", numeros[i]);
    //printf("%d\n\n", *p_numeros);
    printf("La locacion del primer a ultimo numero en la memoria dinamica es: %p\n", *p_numeros);
}
    sum = numeros[0]+numeros[1]+numeros[2]+numeros[3]+numeros[4];
    prom = (sum)/5;
    //printf("%f\n", prom);
    suma0=pow((numeros[0])-prom,2);
    suma1=pow((numeros[1])-prom,2);
    suma2=pow((numeros[2])-prom,2);
    suma3=pow((numeros[3])-prom,2);
    suma4=pow((numeros[4])-prom,2);
    cociente=(suma0+suma1+suma2+suma3+suma4)/4;
    S=sqrt(cociente);
    printf("La Desviacion Estandar S de los datos del texto es: %f\n", S);

    free(p_numeros);


    return 0;
}
