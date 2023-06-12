#include<stdio.h>
#include<math.h>

int multiplicador(int *n);

int main(){
    int *num, valor, result;
    printf("Ingrese un numero cuyo cubo desee conocer:\n");
    scanf("%d",&valor);
    num = &valor;
    result = multiplicador(&num);
    printf("Su numero elevado al cubo es: %d",result);
    return 0;
}

int multiplicador(int *n){
    int resul; 
    resul= pow(*n,3);
    return resul;
}