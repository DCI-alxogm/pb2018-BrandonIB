#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
printf("PROGRAMADOR: BRANDON EMMANUEL HERNANDEZ CORONA\n");
    int n, i;
    float gen[10], edad[10], sem[10], prom[10], mEdad, mProm, sumSem1=0,sumSem2=0, sumSem3=0, sumSem4=0, sumSem5=0, sumSem6=0, sumSem7=0, sumSem8=0, sumSem9=0;
    float sumGenM=0, sumGenW=0;
    printf("Este es un programa que resume la informacion que ud proporciona\n\n");

    for (i=0;i<10;i++){
    printf("Eres hombre (1) o mujer (2)\n");
    scanf("%f", &gen[i]);
    printf("Que edad tienes\n");
    scanf("%f", &edad[i]);
    printf("En que semestre vas (1_9)\n");
    scanf("%f", &sem[i]);
    printf("Escribe tu promedio de la carrera por favor\n");
    scanf("%f", &prom[i]);
    printf("Ahora vas a escribir los datos del siguiente alumno\n\n");
    {
        if ((gen[i])==1)
            sumGenM=sumGenM+1;
        else 
            sumGenW=sumGenW+1;
    }
    
    {
        if ((sem[i])==1)
            sumSem1=sumSem1+1;
        else  if ((sem[i])==2)
        sumSem2=sumSem2+1;
        else  if ((sem[i])==3)
        sumSem3=sumSem3+1;
        else  if ((sem[i])==4)
        sumSem4=sumSem4+1;
        else  if ((sem[i])==5)
        sumSem5=sumSem5+1;
        else  if ((sem[i])==6)
        sumSem6=sumSem6+1;
        else  if ((sem[i])==7)
        sumSem7=sumSem7+1;
        else  if ((sem[i])==8)
        sumSem8=sumSem8+1;
        else  if ((sem[i])==9)
        sumSem9=sumSem9+1;
            
    }
    }
/*
   //OPCIONAL (ACTIVAR) PARA MOSTRAR DATOS EN PANTALLA Y COMPROBAR QUE LAS OPERACIONES SON CORRECTAS
printf("Hombres(1), Mujeres(2)\n");
    printf("%f\n",gen[0]);
    printf("%f\n",gen[1]);
    printf("%f\n",gen[2]);
    printf("%f\n",gen[3]);
    printf("%f\n",gen[4]);
    printf("%f\n",gen[5]);
    printf("%f\n",gen[6]);
    printf("%f\n",gen[7]);
    printf("%f\n",gen[8]);
    printf("%f\n\n",gen[9]);
printf("edad de cada uno de los diez participantes por orden\n");
    printf("%f\n",edad[0]);
    printf("%f\n",edad[1]);
    printf("%f\n",edad[2]);
    printf("%f\n",edad[3]);
    printf("%f\n",edad[4]);
    printf("%f\n",edad[5]);
    printf("%f\n",edad[6]);
    printf("%f\n",edad[7]);
    printf("%f\n",edad[8]);
    printf("%f\n\n",edad[9]);
printf("Semestre de cada uno de los diez alumnos por orden\n");
    printf("%f\n",sem[0]);
    printf("%f\n",sem[1]);
    printf("%f\n",sem[2]);
    printf("%f\n",sem[3]);
    printf("%f\n",sem[4]);
    printf("%f\n",sem[5]);
    printf("%f\n",sem[6]);
    printf("%f\n",sem[7]);
    printf("%f\n",sem[8]);
    printf("%f\n\n",sem[9]);
printf("Promedio de cada uno de los diez estudiantes por orden\n");
    printf("%f\n",prom[0]);
    printf("%f\n",prom[1]);
    printf("%f\n",prom[2]);
    printf("%f\n",prom[3]);
    printf("%f\n",prom[4]);
    printf("%f\n",prom[5]);
    printf("%f\n",prom[6]);
    printf("%f\n",prom[7]);
    printf("%f\n",prom[8]);
    printf("%f\n\n",prom[9]);
*/    
    printf("RESUMEN A CONTINUACION\n\n");
    mEdad=((edad[0])+(edad[1])+(edad[2])+(edad[3])+(edad[4])+(edad[5])+(edad[6])+(edad[7])+(edad[8])+(edad[9]))/10;
    printf("El promedio de las edades de los diez alumnos es: %f\n",mEdad);
    mProm=((prom[0])+(prom[1])+(prom[2])+(prom[3])+(prom[4])+(prom[5])+(prom[6])+(prom[7])+(prom[8])+(prom[9]))/10;
    printf("El promedio de las calificaciones de los diez alumnos es: %f\n",mProm);
    printf("El numero de alumnos hombres es: %f\n",sumGenM);
    printf("El numero de alumnos mujeres es: %f\n",sumGenW);
    printf("El numero de alumnos en Primer Semestre es: %f\n",sumSem1);
    printf("El numero de alumnos en Segundo Semestre es: %f\n",sumSem2);
    printf("El numero de alumnos en Tercer Semestre es: %f\n",sumSem3);
    printf("El numero de alumnos en Cuarto Semestre es: %f\n",sumSem4);
    printf("El numero de alumnos en Quinto Semestre es: %f\n",sumSem5);
    printf("El numero de alumnos en Sexto Semestre es: %f\n",sumSem6);
    printf("El numero de alumnos en Septimo Semestre es: %f\n",sumSem7);
    printf("El numero de alumnos en Octavo Semestre es: %f\n",sumSem8);
    printf("El numero de alumnos en Noveno Semestre es: %f\n",sumSem9);

    return 0;
}
