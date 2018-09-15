#include <stdio.h>
#include <stdlib.h>

int main(){

FILE*archivo;
float  var1, var2;
char var[255];

//CODING
archivo=fopen("test.txt","w");
fputs("Esta es una prueba de fputs...\n",archivo);
printf(archivo, "fprint...\n");
var1=0.15;
var2=100.8;
fprintf(archivo, "%f %f\n",var1,var2);
fclose(archivo);

//READING
archivo=fopen("test.txt","r");
fgets(var,255,(FILE*)archivo);
printf("%s",var);
fscanf(archivo,"%s",var);
printf("%s\n",var);
fscanf(archivo,"%f %f",&var1,&var2);
printf("%f %f\n",var1,var2);
fclose(archivo);

return 0;
}

