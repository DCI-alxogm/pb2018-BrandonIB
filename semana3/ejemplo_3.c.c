#include <stdio.h>
#include <math.h>

int main(){

char c;//se declara variable para vocal que introducir� el usuario
int es_vocalminuscula, es_vocalmayuscula;//se declaran variables para comparar mayusculas y minusculas

printf("Introduce una letra:");//se pide una letra al usuario
scanf("%c", &c);//se toma la variable como char

es_vocalminuscula == (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u');//se compara el char, se eval�a si es cualquier vocal min�scula
es_vocalmayuscula == (c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U');//se compara el char, se eval�a si es cualquier vocal may�scula

if (c == es_vocalmayuscula || es_vocalminuscula){//condicional if para eval�ar entre ambas variables int si el char es vocal o consonante
    printf("%c es una vocal\n", c);//imprime char y menciona que es vocal
} else{
printf("%c es consonante\n", c);//imprime char y menciona que es consonante
}
return 0;
}

