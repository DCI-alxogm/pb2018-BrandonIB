#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fp=NULL;
    char* nombrearchivo="num_maximo.txt";

float a[95];
float *a1;
    //a1=&a[90];
a1=malloc(95*sizeof(float));
int i=0;
float numayor;

fp = fopen(nombrearchivo, "r+");
        if(fp==NULL)return -1;

    for (i=0;i<95;i++){
        fscanf(fp,"%f", &a[i]);
        a1=&a[i];
        //printf("%f\n", a[i]);
        //printf("%f\n", *a1);
        //printf("%p\n", *a1);
        }

        numayor=a[0];
    for (i=0;i<95;i++){
        if (a[i]>numayor){
            numayor=a[i];
        }
    }

printf("El numero mayor  es %f\n", numayor);


    return 0;
}
