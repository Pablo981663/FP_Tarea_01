#include <stdio.h>
#include <stdlib.h>

int main(){
int x,t;

printf("Ingrese el valor de x para la funcion: ");
scanf("%d",&x);
if (x>0){
    t=(x*x)+(2*x);
    printf("x^2+2x");
    printf("\nEl resultado es:%d",t);
}
else if (x<=0){
    t=x+3;
    printf("x+3");
    printf("\nEl resultado es: %d",t);
}
}
