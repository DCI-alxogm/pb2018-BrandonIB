#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

FILE* fp=NULL;
char* nombrearchivo ="texto1.txt";

char Rh[80];
char RG[80];
char Rxi1[80];
char Ryi1[80];
char Rzi1[80];
char Rvix1[80];
char Rviy1[80];
char Rviz1[80];
char RM1[80];

int h;
float G;
float xi1;
float yi1;
float zi1;
float vix1;
float viy1;
float viz1;
float M1;

int z1;
char a;

fp= fopen(nombrearchivo, "r+");
    if(fp==NULL)return -1;

//CONVERSIÓN A FLOAT

for (z1=1;z1<=27; ){
        fscanf(fp,"%s", &a);
        z1= z1 + 1;
    }


fscanf(fp,"%s", &Rh);
fscanf(fp,"%s", &RG);
fscanf(fp,"%s", &Rxi1);
fscanf(fp,"%s", &Ryi1);
fscanf(fp,"%s", &Rzi1);
fscanf(fp,"%s", &Rvix1);
fscanf(fp,"%s", &Rviy1);
fscanf(fp,"%s", &Rviz1);
fscanf(fp,"%s", &RM1);

h=atof(Rh);
G=atof(RG);
xi1=atof(Rxi1);
yi1=atof(Ryi1);
zi1=atof(Rzi1);
vix1=atof(Rvix1);
viy1=atof(Rviy1);
viz1=atof(Rviz1);
M1=atof(RM1);


//CONSTANTES
/*int h=1;
float G=4*(pow(3.1416,2));*/

//MERCURIO
   float xi12,yi12,zi12,sum1r; //OPTIMIZACIÓN
   float /*xi1=0.0508011, yi1=-0.04011642, zi1=-0.2195576, vix1=0.02231875, viy1=0.00485553, viz1=0.00027924, M1=0.055, */r1; //BASIS
   float posx1, posy1, posz1, velx1, vely1, velz1; //EQUIATIONS

   xi12=pow(0.0508011,2); //OPTIMIZACIÓN
   yi12=pow(0.04011642,2); //OPTIMIZACIÓN
   zi12=pow(0.2195576,2); //OPTIMIZACIÓN
   sum1r=xi12+yi12+zi12; //OPTIMIZACIÓN

   r1=sqrt(sum1r);

//EQUATIONS
    posx1=xi1 + (vix1*h);
    posy1=yi1 + (viy1*h);
    posz1=zi1 + (viz1*h);

    velx1=vix1 - ((h*G*M1*xi1)/(pow(r1,3)));
    vely1=viy1 - ((h*G*M1*yi1)/(pow(r1,3)));
    velz1=viz1 - ((h*G*M1*zi1)/(pow(r1,3)));

    int h2, h3, h4;
    float posx2, posy2, posz2, velx2, vely2, velz2, posx3, posy3, posz3, velx3, vely3, velz3, posx4, posy4, posz4, velx4, vely4, velz4;
    h2=101;//días
    posx2=xi1 + (vix1*h2);
    posy2=yi1 + (viy1*h2);
    posz2=zi1 + (viz1*h2);
    velx2=vix1 - ((h2*G*M1*xi1)/(pow(r1,3)));
    vely2=viy1 - ((h2*G*M1*yi1)/(pow(r1,3)));
    velz2=viz1 - ((h2*G*M1*zi1)/(pow(r1,3)));


    h3=201;//días
    posx3=xi1 + (vix1*h3);
    posy3=yi1 + (viy1*h3);
    posz3=zi1 + (viz1*h3);
    velx3=vix1 - ((h3*G*M1*xi1)/(pow(r1,3)));
    vely3=viy1 - ((h3*G*M1*yi1)/(pow(r1,3)));
    velz3=viz1 - ((h3*G*M1*zi1)/(pow(r1,3)));

    h4=365;//días
    posx4=xi1 + (vix1*h2);
    posy4=yi1 + (viy1*h2);
    posz4=zi1 + (viz1*h2);
    velx4=vix1 - ((h2*G*M1*xi1)/(pow(r1,3)));
    vely4=viy1 - ((h2*G*M1*yi1)/(pow(r1,3)));
    velz4=viz1 - ((h2*G*M1*zi1)/(pow(r1,3)));


//RESULTS
    printf("Los datos que describen la orbita de MARTE son los Siguientes: \n\n");
    printf("La posicion de MARTE (x,y,z) en AU cuando h es 1 dia, es:  %f ,%f ,%f\n", posx1, posy1, posz1);
    printf("La velocidad de MARTE (x,y,z) en AU/d cuando h es 1 dia, es: %f ,%f ,%f\n\n", velx1, vely1, velz1);

    printf("La posicion de MARTE (x,y,z) en AU cuando h es 101 dias, es:  %f ,%f ,%f\n", posx2, posy2, posz2);
    printf("La velocidad de MARTE (x,y,z) en AU/d cuando h es 101 dias, es: %f ,%f ,%f\n\n", velx2, vely2, velz2);

    printf("La posicion de MARTE (x,y,z) en AU cuando h es 201 dias, es:  %f ,%f ,%f\n", posx3, posy3, posz3);
    printf("La velocidad de MARTE (x,y,z) en AU/d cuando h es 201 dias, es: %f ,%f ,%f\n\n", velx3, vely3, velz3);

    printf("La posicion de MARTE (x,y,z) en AU cuando h es 365 dias, es:  %f ,%f ,%f\n", posx4, posy4, posz4);
    printf("La velocidad de MARTE (x,y,z) en AU/d cuando h es 365 dias, es: %f ,%f ,%f\n\n", velx4, vely4, velz4);


    printf("La distancia de un punto genérico al Sol de la orbita en AU es: %f\n", r1);


    return 0;
}
