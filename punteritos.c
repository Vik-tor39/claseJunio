//PUNTEROS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    /*Hasta el momento se asignaba directamente un valor que se queria almacenar en una variable, pero tambien existe la posibilidad de
    asignar la direccion de memoria de un determinado valor a una variable o a una funcion, asi se evitara colocar o repetir una copia de un valor cada
    vez que se requiere este dato.*/
    char *m, varChar;  //Variable
    m = &varChar;  //Direccion
    *m='B';  //Contenido
    
    int *n, varInt;
    n = &varInt;
    *n = 696;

    float *f, varFloat;
    f = &varFloat;
    *f = 69.666;

    printf("El char es: %c. Y la direccion de memoria de la variable que lo contiene es %d", varChar, m);
    printf("\nEl entero es: %d. Y la direccion de memoria de la varibale que lo contiene es %d", varInt, n);
    printf("\nEl float es: %f. Y la direccion de memoria de la varibale que lo contiene es %d", varFloat, f);
    return 0;
}