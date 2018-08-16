// BRANDON EMMANUEL HERNÁNDEZ CORONA
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int edad;
    int edad_2;
    char nombre[20];

    cout <<"Cual es tu nombre?";
    cin >> nombre;

    cout << "Cual es tu edad?";
    cin >> edad;
    edad_2=edad +10;

    cout << "tus datos son: " << nombre <<" "<< edad_2 ;


    return 0;
}
