#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*float enter();

int main()
{
    enter();
    return 0;
}
*/
int main()
{
FILE* fp=NULL;
char* nombrearchivo="TempLaterales.txt";
float T[4];
float *Tmem;
Tmem=malloc(4*sizeof(float));
int i=0;
fp = fopen(nombrearchivo, "r");
if(fp=NULL)return -1;
for(i=0;i<=4;i++)
{
    fscanf(fp,"%f", &T[i]);
    Tmem=&T[i];
    printf("%f\n", *Tmem);
    printf("%f\n", *Tmem);
    printf("%p\n", T[i]);
}
return 0;
}
