#include <stdio.h>
#include <stdlib.h>

int main(){
int edad;
float a,b;
int ticket;
printf("\tPrecios\n");
printf("\n1.-Entrada normal: 75 pesos\n2.-Ninios: descuento de 60 por ciento\n3.-Adultos Mayores de 60 anios: descuento del 55 por ciento");
printf("\nIngrese su edad: ");
scanf("%d",&edad);
if (edad >=60){
    a=75*0.55;
    b=75-a;
    printf("\n\tSe aplico descuento de Adultos Mayores");
    printf("\n\nPrecio de entrada: %.2f",b);
}
else if(edad<=10){
    a=75*0.60;
    b=75-a;
    printf("\n\tSe aplico el descuento a Ninios");
    printf("\n\nPrecio de entrada: %.2f",b);
}
else {
    b=75;
    printf("\n\tEntrada Normal");
    printf("\n\nPrecio de entrada: %.1f",b);
}


}
