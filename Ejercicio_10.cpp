#include <stdio.h>
#include <stdlib.h>

int main(){
int opt,base,altura,lado_a,lado_b,A;

printf("\n1.-Calcular el area de un triangulo\n2.-Calcular area de un trapecio\n3.-Calcular area de un rectangulo\n");
printf("Seleccione una opcion: ");
scanf("%d",&opt);
switch (opt){
case 1:
    printf("Ingrese la base del triangulo: ");
    scanf("%d",&base);
    printf("Ingrese la altura del triangulo: ");
    scanf("%d",&altura);
    A=(base*altura)/2;
    printf("El area del triangulo es:%d",A);
break;
case 2:
    printf("Ingrese lado a del trapecio: ");
    scanf("%d",&lado_a);
    printf("Ingrese lado b del trapecio: ");
    scanf("%d",&lado_b);
    printf("Ingrese la altura del trapecio: ");
    scanf("%d",&altura);
    A=((lado_a+lado_b)/2)*altura;
    printf("El area del trapecio es:%d",A);
    break;
case 3:
    printf("Ingrese base de rectangulo: ");
    scanf("%d",&base);
    printf("Ingrese altura de rectangulo: ");
    scanf("%d",&altura);
    A=base*altura;
    printf("El area del rectangulo es:%d",A);
    break;
}

}
