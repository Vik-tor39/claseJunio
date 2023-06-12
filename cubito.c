#include<stdio.h>

int multiplicador(int n);

int main(){
    int num, result;
    printf("Ingrese un numero cuyo cubo desee conocer:\n");
    scanf("%d",&num);
    result = multiplicador(num);
    printf("Su numero elevado al cubo es: %d",result);
    return 0;
}
int multiplicador(int n){
    int resul=1;
    for(int i=0; i<3; i++){
       resul*=n;
    }
    return resul;
}