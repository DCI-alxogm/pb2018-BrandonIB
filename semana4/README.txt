ejercicio1_semana4.c 
El programa añade el bucle while para ejecutar lo que el usuario pida indefinidas veces, así el switch toma el valor que el usuario introdujo para ejecutar la transformación de coordenadas o de temperaturas y, al final del proceso vuelva a preguntar al usuario que desea hacer.
Ejemplo 1:
El programa transforma temperatura a Kelvin, con un bucle while implicado, que lo que hace es definir un ciclo de transformaciones con una condición, cuando se deje de cumplir esa condición, se finaliza el programa. Las transformaciones de coordenadas son 10 y se definen por la variable delta y por la variable entera n, para el número de veces.
Ejemplo 2:
Hace lo mismo que el programa del ejemplo 1, sólo que se añade un “int” ‘op’=1 para que al final del proceso, el programa pregunte si se quiere realizar de nuevo, entonces escanea esta variable para que se cumpla o no la condición del while y continuar o finalizar.
Ejemplo 3:
El programa tiene la misma función que el anterior, sólo que en este, se realiza la pregunta al final del proceso para si se quiere ejecutar de nuevo el programa y, a diferencia del anterior, este escanea “si” o “no” en vez de 1 o 2, para que se cumpla o no la condición del while. Para esto se declaró un “char” ‘op’ de dos caracteres y se escaneó como %s (string) en vez del “int” del ejemplo anterior.
