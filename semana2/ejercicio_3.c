#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,d ;
    float w,x,y,z ;

    printf("dame un numero Real\n");
    scanf("%f",&a);

    printf("dame otro numero Real\n");
    scanf("%f",&b);

    printf("dame otro numero Real\n");
    scanf("%f",&c);

    printf("dame un ultimo numero Real\n");
    scanf("%f",&d);

    w = ((a+b)*(c/d));
    x = (((a+b)*c)/d) ;
    y = (a+b)*(c/d) ;
    z = a + ((b*c)/d) ;

    printf("w es: %f \n",w) ;
    printf("x es: %f \n",x) ;
    printf("y es: %f \n",y) ;
    printf("z es: %f \n",z) ;



    return 0;
}
