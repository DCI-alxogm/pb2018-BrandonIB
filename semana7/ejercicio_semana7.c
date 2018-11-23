#include<stdio.h>
#include<math.h>


int main()
{


int space, o, p, q, r, s;  //se declaran variables
float integral, m, n, c, d;
m=0;
n=0;

FILE *archivo1;

archivo1 = fopen("vars.txt","r");//Se abre archivo
fscanf(archivo1, "%i %i %i %i %f", &o, &s, &p, &q, &c); //lectura
space = (p-(s-1))/q; //Espaciado

fclose(archivo1); //se cierra archivo de lectura


FILE *archivo2;
archivo2 = fopen("res.txt", "w"); //se abre archivo de escritura

for(int i=s;i<=p;i+=space)  //calculos
{
    r=pow(i, o);
    n=(i-s)/(c);

	for (int j=1;j<c;j++)
	{
        m = m + pow((s+j*n),o);
    }

d=(pow(s,o)+pow(i,o))/2;
integral=n*(d+m);
fprintf(archivo2,"%i a la %i es %i, su integral: %f\n",i, o, r, integral); //escritura de resultados
}

fclose(archivo2);    //se cierra archivo de escritura


return 0;
}
