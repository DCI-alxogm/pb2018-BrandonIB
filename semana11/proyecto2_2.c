//ESTE ES UN PROGRAMA QUE CALCULA LA TEMPERATURA EN UNA PLACA, DADAS LAS TEMPERATURAS LATERALES INICIALES EN UN ARCHIVO, LLAMADO DESDE OTRA FUNCION, HECHO POR BRANDON EMMANUEL HERNANDEZ CORONA
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

float enter()//SEGUNDA FUNCION
{
FILE* fp=NULL;
char* nombrearchivo="TempLaterales.txt";    //LECTURA DE TEMPERATURAS LATERALES
float T[4];//SE DECLARA VARIABLE DE CADENA
float *Tmem[4];//SE DECLARA APUNTADOR
Tmem[4]=malloc(4*sizeof(float));//SE DEFINE TAMAÑO DE APUNTADOR
int i=1;
fp = fopen(nombrearchivo, "r+");
if(fp==NULL)return -1;

printf("Todos los datos o magnitudes calculados en este programa se guardan");
printf("\nen archivos, sin embargo se muestra al ejecutarse algunas");
printf("\nreferencias para entender el programa\n\n");                          //SE IMPRIME RESUMEN HASTA AHORA A LA PANTALA

printf("\nLas Temperaturas laterales de la placa dadas en un archivo de texto son:\n");
for(i=1;i<=4;i++)
{
    fscanf(fp,"%f", &T[i]);
    Tmem[i]=&T[i];//SE IGUALA VARIABLE Y APUNTADOR PARA MAGNITUD Y MEMORIA DINAMICA
    printf("%f\n", *Tmem[i]);
    //printf("%f\n", T[i]);
    //printf("%p\n", *Tmem);
}
fclose(fp);
/* *Tmem[1]esT1; *Tmem[2]esT2; *Tmem[3]esT3; *Tmem[4]esT4; */

float esq1, esq2, esq3, esq4;   //SE CALCULAN LAS TEMPERATURAS DE LAS ESQUINAS INTERCEPTORAS POR EL MÉTODO GAUSS-SEIDEL
esq1=(*Tmem[1]+*Tmem[3])/2;
esq2=(*Tmem[1]+*Tmem[4])/2;
esq3=(*Tmem[2]+*Tmem[3])/2;
esq4=(*Tmem[2]+*Tmem[4])/2;

printf("\nLas Temperaturas de las esquinas de la placa son: ");//RESUMEN DE MAGNITUDES
printf("%f\n", esq1);
printf("%f\n", esq2);
printf("%f\n", esq3);
printf("%f\n\n", esq4);

//STATUS AL USUARIO:
printf("Este es un STATUS de las magnitudes de la placa 8x8 al momento\n");//SEIMPRIME LA PLACA CON MAGNITUDES INICIALES
float matriz[8][8] = {20,18,18,18,18,18,18,22, 22,0,0,0,0,0,0,26, 22,0,0,0,0,0,0,26, 22,0,0,0,0,0,0,26, 22,0,0,0,0,0,0,26, 22,0,0,0,0,0,0,26, 22,0,0,0,0,0,0,26, 23.5,25,25,25,25,25,25,25.5};
int filas, columnas;
for(filas=0;filas<8;filas++)
{
    for(columnas=0;columnas<8;columnas++)
    {
        printf("%.1f ", matriz[filas][columnas]);
    }
    printf("\n");
}


printf("\nLas temperaturas finales de la placa se muestran en las diferentes iteraciones (archivos) generados aparte");
printf("\nBRANDON EMMANUEL HDEZ CORONA...");
//A CONTINUACIÓN SE CALCULAN LAS TEMPERATURAS RESTANTES:
int x,y,dimensiones=8;  //SE DECLARAN VARIABLES PARA CALCULAR MAGNITUDES POSTERIORES
int i1=0,j=0;
FILE* final;//SE DECLARA ARCHIVO PARA LAS MAGNITUDES FINALES
float matriz1 [dimensiones][dimensiones];//SE DECLARA MATRIZ 2
for (y=0;y<dimensiones;y++)//SE INICIAN CICLOS DE CALCULOS PARA MAGNITUDES
{
    for(x=0;x<dimensiones;x++)//SE DEFINEN CONDICIONES PARA LAS COORDENADAS MATRICIALES
{
    matriz [x][y]=0;
}
}
    for(y=0;y<dimensiones;y++)//SE DEFNEN CONDICIONES PARA LAS COORDENADAS MATRICIALES
{
    matriz[0][y]=*Tmem[3];
    matriz[dimensiones-1][y]=*Tmem[4];
}
    for (x=0;x<dimensiones;x++)//CONDICIONES PARA DISTRIBUCION EN MATRIZ
{
    matriz[x][0]=*Tmem[2];
    matriz[x][dimensiones-1]=*Tmem[1];
}
while (i1<=8)
{
    while (matriz [8][8]<*Tmem[3]-1)//CONDICIONES PARA DISTRIBUCION EN MATRIZ
{
    for (y=1;y<dimensiones-1;y++)
    {
    for (x=1;x<dimensiones-1;x++)
    {
    matriz[x][y]=(matriz[x+1][y]+matriz[x-1][y]+matriz[x][y+1]+matriz[x][y-1])/4;//ECUACION 2 GAUSS-SEIDEL PARA PROMEDIO
    }
    }
    while (j<8)
    {
    char TEMP [64];
    snprintf(TEMP, sizeof(char)*64, "Placa%i",j);//SE DEFINE TAMAÑO DE MEMORIA DE CHAR
    j++;
    final=fopen(TEMP,"w");//ESCRITURA...
    for (y=0; y<dimensiones; y++)
    {
    for (x=0; x<dimensiones; x++)
    {
    fprintf(final,"%.2f  ",matriz[x][y]);
    }
    fprintf(final, "\n");
    }
    }
    fclose(final);
    j=0;
    }
    i1++;
    j=0;
    }


return 0;
}
