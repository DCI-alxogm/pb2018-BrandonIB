#include <stdio.h>
#include <stdlib.h>

//Compilación clase
int main(){
int j,n;
printf("dime el numero de elementos para trabajar\n");
scanf("%i",&n);
float numeros[n];
for(j=0;j<n;j++){
    scanf("%f",&numeros[j]);
    numeros[j]*=2;
    printf("%f\n",numeros[j]);
    }
    return 0;
    }

/*
//EJEMPLO 1
int main()
{
//1
    int i,j, N=10;
    float numeros[N];
    for(i=0;i<N;i++){
        numeros[i]=0;
//2
        for(j=0;j<N;j++){
        scanf("%f", &numeros[j]);
//3
        for(j=0;j<N;j++){
        printf("%f\n",numeros[j]);
    }
    }
    }
    return 0;
}


//EJEMPLO 2
#include <stdlib.h>
#include <stdio.h>
int main(){
for(i=0;i<N;i++){
scanf("%f", &numeros[i]);//asigna el valor a partir de lo que proporciona el usuario, línea por línea.
}
return 0;
}


//EJEMPLO 3
#include <stdlib.h>
#include <stdio.h>
int main(){
for(i=0;i<N;i++){
printf("%f\n",numeros[i]);//imprime a la pantalla el valor del elemento i-ésimo del arreglo.
}
return 0;
}
*/
